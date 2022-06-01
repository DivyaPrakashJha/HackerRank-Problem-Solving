#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    vector<string>ans;

    while(t--){
        string w;
        cin>>w;

        bool possible = next_permutation(w.begin(), w.end());

        if (possible == 1){
            ans.push_back(w);
        } 
        else{
            ans.push_back("no answer");
        }
    }

    for (auto it : ans){
        cout<<it<<"\n";
    }

}