#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n; 
    cin>>n;

    vector<long long int>order(n);
    vector<long long int>prep(n);
    vector<pair<long long int, long long int>>serve;

    for (int i = 0; i<n; i++){
        cin>>order[i];
        cin>>prep[i];

        serve.push_back({(order[i]+prep[i]), i});
    }
    sort(serve.begin(), serve.end());

    for(int j = 0; j< n ;j++){
        cout<<serve[j].second + 1<<" ";
    }

return 0;
}