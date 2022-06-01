#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int len = s.size();
    int sos = len/3;
    int count = 0;

    for (size_t i = 0; i < sos; i++){
        if (s[i*3 + 0] != 'S'){
            count+=1;
        }
        if (s[i*3 +1] != 'O'){
            count+=1;
        }
        if(s[i*3 + 2] != 'S'){
            count+=1;
        }
        
    }
    
    cout<<count;

}