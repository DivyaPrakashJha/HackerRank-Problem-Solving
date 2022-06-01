#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    vector<int>v(n);    

    vector<int>left;
    vector<int>equal;
    vector<int>right;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        int p = v[0];

        if (v[i]<p){
            left.push_back(v[i]);
        }
        else if (v[i]==p){
            equal.push_back(v[i]);
        }
        else{
            right.push_back(v[i]);
        }
    }

    for(auto it : left) cout << it << " ";
    for(auto it : equal) cout << it << " ";
    for(auto it : right) cout << it << " ";


}