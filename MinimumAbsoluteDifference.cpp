#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    
    vector<long long>v(n);

    for (long long i = 0; i< n ;i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    long long int ans = abs(v[1]-v[0]);

    for (long long int i = 0; i< n-1 ;i++){
        ans = min(ans, abs(v[i]-v[i+1]));
    }
    cout<<ans;
return 0;
}