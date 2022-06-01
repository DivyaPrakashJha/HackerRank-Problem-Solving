#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, i = 0;
    cin>>p;
    vector<string>ans;

    while(i<p){
        string s1, s2;
        cin>>s1>>s2;

        int len1= s1.length();
        int len2= s2.length();

        int flag;

        for(int j = 0; j< len1; j++){
            
            flag = 0;
            
            char temp = s1[j];
            int ind = s2.find(temp);

            if (ind>=0 && ind<=len2){
                ans.push_back("YES");
                flag = 1;
                break;
            }
        }

        if (flag==0){
            ans.push_back("NO");
        }

        i++;
    }

    for (int i = 0; i < p; i++){
        cout<<ans[i]<<"\n";      
    }
    
}