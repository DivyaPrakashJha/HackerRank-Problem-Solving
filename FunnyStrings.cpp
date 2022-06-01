#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, j = 0;
    cin>>q;

    vector<string>ans;

    while (j<q){

        string str, rev_str;
        cin>>str;
        int flag = 1;

        for (int i = str.length()-1; i >= 0; i--){
            rev_str.push_back(str[i]);
        }

        // rev_str = str;
        // reverse(rev_str.begin(), rev_str.end());

        for (size_t i = 1; i < str.length(); i++){
            int diff1 = abs(int(str[i])-int(str[i-1]));
            int diff2 = abs(int(rev_str[i])-int(rev_str[i-1]));

            if (diff1!=diff2){
                ans.push_back("Not Funny");
                flag=0;
                break;
            }
        }

        if (flag==1){
            ans.push_back("Funny");
        }
        
        j++;
    }

    for (int i = 0; i < q; i++){
        cout<<ans[i]<<"\n";
    }
    
}