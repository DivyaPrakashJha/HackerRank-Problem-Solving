#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, i = 0;
    cin>>q;
    vector<string>ans;

    while(i<q){
        string s;
        cin>>s;
        int j = 0;
        string hackerrank = "hackerrank";

        for (int k = 0; k < s.size() && j < hackerrank.size(); k++){
            if (s[k] == hackerrank[j]){
                j++;
            }
        }

        if (j == hackerrank.size()) {
            ans.push_back("YES");
        } 
        else {
            ans.push_back("NO");
        }

        i++;
      
    } 

    for (size_t r = 0; r < q; r++){
        cout<<ans[r]<<"\n";
    }
    

}