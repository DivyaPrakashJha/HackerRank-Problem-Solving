#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int count;
    vector<int>ans;

    for(int i = 0; i< n;i++){
        string s,p;
        cin>>s;
        count = 0;

        for(int j = 0; j<s.size(); j++){
            char temp = s[j];
            int temp1 = p.find(temp);

            if (temp1==string::npos){
                count+=1;
            }
            p.push_back(temp);
        }

        ans.push_back(count);
        p.clear();
    }

    for(int i = 0; i< n; i++){
        cout<<ans[i]<<"\n";
    }

}