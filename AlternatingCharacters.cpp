#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, j = 0;
    cin>>q;

    vector<int>ans;

    while (j < q){
        string s;
        cin>>s;

        int count = 0;

        for(int i = 0; i<= s.size()-1; i++){
              if (s[i]==s[i+1]){
                  s.erase(i, 1);
                  count+=1;
                  i-=1;
              }
        }
        ans.push_back(count);
        j++;

    }

    for (size_t i = 0; i < q; i++){
        cout<<ans[i]<<"\n";
    }
    
    
}