#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, e = 100;
    cin>> n>>k;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int j = 0, temp = 0;
    do{
        temp = (j+k)%n;
        j+=k;
        
        if (arr[temp]==1){
            e-=2;
        }
        e-=1;

    }while(temp != 0);

    cout<<e;
    

}