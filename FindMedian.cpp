#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }

    sort(all(v));

    cout<<v[(n+1)/2 - 1];
    

}