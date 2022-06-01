#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n; 
    cin>>n;

    vector<long long int>v(n);

    for(long long int i = 0; i< n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    long long int temp = v[0], count = 1;
    for(long long int i = 0; i< n ;i++){
        if(v[i]>temp+4){
            count++;
            temp = v[i];
        }
    }

    cout<<count;

return 0;
}
