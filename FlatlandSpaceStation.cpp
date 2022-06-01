#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int>v(m);

    for (int i = 0; i< m; i++){
        cin>>v[i];
    }

    vector<int>ans;

    for (int i = 0; i< n; i++){
        vector<int>distances;

        for (int j =0; j< m; j++){
            int distance = abs(v[j]-i);
            distances.push_back(distance);
        }

        sort(distances.begin(), distances.end());
        ans.push_back(distances[0]);
        distances.clear();
    }

    sort(ans.begin(), ans.end());
    
    cout<<ans[n-1];

return 0;
}