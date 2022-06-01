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
        string s;
        cin>>s;

        int arr1[26] = {0};
        int arr2[26] = {0};

        int count =0;

        if (s.size()%2==1){
            ans.push_back(-1);
        }
        else{
            string s1;
            string s2;

            for (int i = 0; i< s.size(); i++){

                if (i<s.size()/2){
                    s1.push_back(s[i]);
                    arr1[s[i]-'a']++;
                }
                else{
                    s2.push_back(s[i]);
                    arr2[s[i]-'a']++;
                }
            }


            for(int j =0; j< 26; j++){
                count+= abs( arr1[j] - arr2[j] );
            }

            ans.push_back(count/2);
        }

    }

    for (auto it : ans){
        cout<<it<<"\n";
    }

}