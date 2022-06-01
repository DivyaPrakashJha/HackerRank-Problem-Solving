#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    vector<string>ans;

    for(int i = 0; i< q; i++){
        long long int n, k;
        cin>>n>>k;
        vector<long long int>a(n);
        vector<long long int>b(n);

        string flag = "YES";

        for (int i = 0; i< n; i++){
            cin>>a[i];
        }
        
        for (int i = 0; i< n; i++){
            cin>>b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long int>());

        for (int j = 0; j< n ;j++){
            if (a[j]+b[j]<k){
                flag = "NO";
            }
        }

        ans.push_back(flag);
    }

    for (int k = 0; k< ans.size(); k++){
        cout<<ans[k]<<"\n";
    }
    
return 0;
}