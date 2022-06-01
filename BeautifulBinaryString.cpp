#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    string bin;
    cin>>bin;

    int count = 0;
    for (int i = 0; i < n-2; i++)
    {
        if(bin.substr(i, 3)=="010"){
            i+=2;
            count+=1;
        }
    }

    cout<<count;

}