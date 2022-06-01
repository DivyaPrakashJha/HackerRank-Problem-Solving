#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    vector<int>width(n);

    for (int i = 0; i< n; i++){
        cin>>width[i];
    }

    vector<int>ans(t);

    for (int i = 0; i< t; i++){
        int x, y;
        cin>>x>>y;
        
        vector<int>v;
        for (int j= x; j<=y; j++){
            v.push_back(width[j]);
        }

        sort(v.begin(), v.end());
        ans[i] = v[0];

        v.clear();
    }

    for (int k = 0; k< ans.size(); k++){
        cout<<ans[k]<<"\n";
    }
return 0;
}

