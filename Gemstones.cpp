#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<string>v(n);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    for(int l = 0; l<v[0].length(); l++){
       for(int m = 0; m<v[0].length(); m++){
           if (v[0][l]==v[0][m] && m!=l){
               v[0].erase(m, 1);
           }
       } 
    }
    
    int len = v[0].length();
    int count = 0;

    for(int i = 0; i < len; i++){
        int flag = 1;
        for(int j = 1; j< n; j++){
            int x = v[j].find(v[0][i]);
            if (x==string::npos){
                flag=0;
            }
        }
        if (flag==1){
            count+=1;
        }
    } 

    cout<<count;
    

}