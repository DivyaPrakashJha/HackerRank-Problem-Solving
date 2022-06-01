#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string>v(n);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    vector<int>cnt;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int count = 0;

            for (int k =0; k < m; k++){
                char temp1 = v[i][k];
                char temp2 = v[j][k];

                if( (temp1 == '1') || (temp2 == '1') ){
                    count++;
                } 
            }

            cnt.push_back(count);
        }
    }

    int mx = *max_element(cnt.begin(), cnt.end());
    int mx_cnt = 0;

    for (auto it : cnt){
        if (it == mx){
            mx_cnt++;
        }
    }

    cout<<mx<<"\n"<<mx_cnt;

}