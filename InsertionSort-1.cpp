#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);

    for (size_t i = 0; i < n; i++){
        cin>>v[i];
    }

    int temp = v[n-1];

    for (int i = n-2; i >=0 ; i--){
        if (v[i]>=temp ){
            v[i+1]=v[i];

            for (size_t i = 0; i < n; i++){
                cout<<v[i]<<" ";
            }
        }
        else if (v[i]<temp){
            v[i+1]=temp;
            for (size_t i = 0; i < n; i++){
                cout<<v[i]<<" ";
            }
            break;
        }

        cout<<"\n";
    }

    if (v[0]>=temp){
        v[0]=temp;
        for (size_t i = 0; i < n; i++){
            cout<<v[i]<<" ";
        }
    }
    
}
