#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin>>s>>t;

    int k;
    cin>>k;

    int cl = 0;

    while(cl<s.size() && cl<t.size()){
        if(s[cl]!=t[cl]) break;
        cl++;
    }
    if(s.size()-cl+t.size()-cl<=k&& (s.size()-cl+t.size()-cl)%2==k%2){
        cout<<"Yes"<<endl;
    }
    else if(s.size()+t.size()<=k){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;

}