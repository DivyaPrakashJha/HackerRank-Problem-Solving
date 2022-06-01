#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    vector<int>ans;

    while(q--){
        string s, temp, temp1;
        cin>>s;

        for (int i = 0; i< s.size(); i++){
            temp = s;
            temp1 = s;

            reverse(temp1.begin(), temp1.end());

            if (temp == temp1){
                ans.push_back(-1);
                break;
            }
            else{

                temp.erase(s.size()-i-1, 1);
                temp1.erase(i, 1);
    
                if (temp == temp1){
                    ans.push_back(i);
                    break;
                }
            }
        }

    }

    for(auto it: ans){
        cout<<it<<"\n";
    }
}