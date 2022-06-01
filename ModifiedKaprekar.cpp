#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, q;
    cin>>p>>q;

    vector<int>ans;

    for (int i = p; i <= q; i++){
        int n = i;

        string num = to_string(n);
        int d = num.size();

        int sq = n*n;

        string s = to_string(sq);
        int len_sq = s.size();

        string s1, s2;

        if (len_sq == 2*d){
            for (int i = 0; i< 2*d; i++){
                if (i < d){
                    s1.push_back(s[i]);
                }
                else{
                    s2.push_back(s[i]);
                }
            }
        }

        else {
            for (int i = 0; i< 2*d; i++){
                if (i < d-1){
                    s1.push_back(s[i]);
                }
                else{
                    s2.push_back(s[i]);
                }
            }
        }

        stringstream temp1(s1);
        stringstream temp2(s2);

        int s1i = 0, s2i = 0;
        temp1 >> s1i;
        temp2 >> s2i;

        int s3 = s1i + s2i;

        if (s3 == n){
            ans.push_back(i);
        }
        
    }

    if (ans.size() == 0){
            cout<<"INVALID RANGE";
    }
    
    else{
        for(auto it : ans){
            cout<<it<<" ";
        
        }
    }

    

}