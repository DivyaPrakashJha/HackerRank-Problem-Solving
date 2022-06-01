#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    for (int i = 0; i< n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    long long int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum + pow(2, i) * v[n-1-i];
    }

    cout<<sum;

return 0;
}