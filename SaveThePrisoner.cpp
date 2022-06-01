#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    vector<int>ans;

    while(t--){
        int n, m, s;
        cin>>n >>m >>s;

        ans.push_back(1 + (s-1+m-1)%n);
    }

    for(auto it : ans){
        cout<<it<<"\n";
    }

}