#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);

    for (int i = 0; i<n; i++){
        cin>>v[i];
    }

    vector<pair<int, int>>ans;

    int temp, temp1;
    for (int j = 0; j<n; j++){ // for x
        
        for (int k = 0; k<n; k++){  // for position of x
            if (j+1==v[k]){
                temp = k+1;
            }
        }

        for (int l = 0; l<n; l++){ // for y
            if (v[l] == temp){
                temp1 = l+1;
                ans.push_back({j+1, temp1});
            }
        }
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i<n;i++){
        cout<<ans[i].second<<endl;
    }
return 0;
}