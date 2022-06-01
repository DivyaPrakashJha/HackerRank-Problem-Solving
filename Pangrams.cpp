#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int arr[26]={0};

    for (size_t i = 0; i < s.length(); i++){
        int x = int(s[i]);
    
        if (x>=97 && x<=122){
            arr[x-97]=1;
        }
        else if(x>=65 && x<=90){
            arr[x-65]=1;
        }
    }

    int sum = 0;
    for (size_t i = 0; i < 26; i++){
        sum = sum + arr[i];
    }
    

    if (sum==26){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }
    
    
}