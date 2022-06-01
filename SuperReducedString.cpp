#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;


    int i = 0;
    while (i<s.length()){
        char x = s[i];
        int len = s.length();

        if (x==s[i+1]){
            s.erase(i, 2);
            i=0;
        }
        else{
            i++;
        }
    }
    
    if (s.length()==0){
        cout<<"Empty String";
    }
    else{
        cout<<s;
    }
    

}