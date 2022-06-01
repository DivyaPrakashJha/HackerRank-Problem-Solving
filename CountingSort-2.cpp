#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>v(100, 0);

    for (int i = 0; i< n; i++){
        int temp;
        cin>>temp;

        v[temp]++;
    }

    for (int i = 0; i< 100; i++){
        int count = v[i];
        
        if (count != 0){
            for (int j = 0; j < count; j++){
                cout<<i << " ";
            }
        }

    }

}