#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int>v(100, 0);

    for (int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        v[temp]++;
    }

    for (auto it : v) cout << it << " ";



}