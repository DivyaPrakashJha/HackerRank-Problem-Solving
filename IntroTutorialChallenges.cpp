#include<bits/stdc++.h>

using namespace std;

int main(){
    int num, n;
    cin>>num>>n;

    vector<int>v(n);
    for (int i = 0; i< n; i++){
        cin>>v[i];
    }

    for(int j = 0; j< n; j++){
        if(v[j]==num){
            cout<<j;
        }
    }
return 0;
}