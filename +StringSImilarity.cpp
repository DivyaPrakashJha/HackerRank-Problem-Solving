#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

// TLE on 2/11 test 

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    vector<int>ans;

    while(t--){
        string s;
        cin>>s;
        int count = 0;

        for(int i = 0; i < s.size(); i++){

            int j = i, k = 0;

            while( j < s.size() && k < s.size()){
                if(s[j] == s[k]){
                    count++;
                }
                else{
                    break;
                }
                
                
                j++;
                k++;
            }

        }

        ans.push_back(count);
    }

    for (auto it : ans){
        cout<<it<<"\n";
    }

}