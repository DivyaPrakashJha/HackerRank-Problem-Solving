#include<bits/stdc++.h>

using namespace std;

# define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n >>k;

    vector<int>v(n);

    for (int i = 0; i< n; i++){
        cin>>v[i];
    }

    sort(all(v), greater<int>());

    int min_cost = 0;

    for (int j = 0; j<n; j++){
        int temp = (j/k) + 1;
        min_cost += v[j]*temp;
    }

    cout<<min_cost;
}