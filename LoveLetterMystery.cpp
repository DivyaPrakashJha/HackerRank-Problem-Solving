#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, i = 0;
    cin>>q;

    vector<int>ans;

    while (i<q){
        string str;
        cin>>str;

        int len = str.length();
        int operations = 0;
        
        int j = 0;
        while(j < len/2 ){

            if (int(str[j])>=int(str[len-j-1])){
                int diff = int(str[j])-int(str[len-j-1]);
                operations+=diff;
            }
            else if (int(str[j])<=int(str[len-j-1])){
                int diff = int(str[len-j-1])-int(str[j]);
                operations+=diff;
            }
            j++;
        }

        ans.push_back(operations);

        i++;
    }

    for (int i = 0; i < q; i++)
    {
        cout<<ans[i]<<"\n";
    }
    

}
