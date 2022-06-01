#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, k; 
    cin>> n >> k;

    vector<long long int>v(n);

    for(long long int i = 0; i< n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    long long int sum = 0, j = 0;

    while (sum<=k){
       sum = sum + v[j]; 
       j++;
    }

    cout<<j-1;

return 0;
}