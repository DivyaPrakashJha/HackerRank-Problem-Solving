#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int arr[26] = {0};

    for (int i = 0; i< s.size(); i++){
        arr[s[i]-'a']++;
    }

    int count = 0;

    for (int j = 0; j< 26; j++){
        if (arr[j]%2==1){
            count++;
        }
    }

    if (count>0 && s.size()%2==0){
        cout<<"NO";
    }
    else if (count>1 && s.size()%2==1){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }

}