#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, res;
    cin>>n>>k;
    
    vector<int>v;
    
    for (int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    for (int j = 0; j<n; j++){
        for (int l = j; l<n; l++){
            if (j!=l){
                if ((v[j]+v[l])%k==0){
                    res+=1;
                }
            }
        }
    }
    cout<<res;
    
    return 0;
}