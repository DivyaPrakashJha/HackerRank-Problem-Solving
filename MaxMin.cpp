#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>> n>> k;

    vector<int>v(n);

    for(int i = 0; i< n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int mx, mn;

    vector<int>unfairness;

    for (int j = 0; j< n-k+1; j++){
        mx = v[j+k-1];
        mn = v[j];

        int temp = mx - mn;

        unfairness.push_back(temp);
    }

    sort(unfairness.begin(), unfairness.end());

    cout<<unfairness[0];


}