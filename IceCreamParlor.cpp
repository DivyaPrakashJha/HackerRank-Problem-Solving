#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector< pair<int, int> >ans;

    while (t--){
        int m, n;
        cin>>m>>n;

        vector<int>v(n);

        for (int i = 0; i< n; i++){
            cin>>v[i];
        }

        for (int j = 0; j < n; j++){
            for (int k = j+1; k < n; k++){
                if (v[j]+v[k]==m){
                    ans.push_back({j, k});
                    break;
                }
            }
        }
    }

    for (auto it : ans){
        cout<<it.first+1<<" "<<it.second+1<<"\n";
    }

}