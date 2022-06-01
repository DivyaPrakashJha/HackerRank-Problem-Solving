#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    int n, k;

    for (int i = 0; i<t; i++){
        cin>>n>>k;
        int count = 0;
        int a[t][n];
        for (int j = 0; j<n;j++){
            cin>>a[i][j];

            if (a[i][j]<=0){
                count+=1;
            }   
        }
        if (count>=k){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

return 0;
}