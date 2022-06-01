#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<long long int>imp;

    long long int luckbal = 0;

    for (int i = 0; i< n ;i++){
        long long int a, b;
        cin>>a>>b;

        if (b==1){
            imp.push_back(a);
        }
        else if (b==0){
            luckbal+=a;
        }
    }

    sort(imp.begin(), imp.end(), greater<int>());

    for (int j = 0; j<imp.size(); j++){
        if (j<k){
            luckbal+=imp[j];
        }
        else{
            luckbal-=imp[j];
        }   
    }

    cout<<luckbal;
    
return 0;
}