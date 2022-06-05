#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin>>n>>k>>q;

    deque<int>ls;
    vector<int>ind(q);

    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        ls.push_back(temp);
    }

    for (int j = 0; j< q; j++){
        cin>>ind[j];
    }

    for(int l = 0; l<k; l++){
        int temp1 = ls[n-1];
        ls.pop_back();
        ls.push_front(temp1);
    }

    for (int i = 0; i< q; i++){
        cout<<ls[ind[i]]<<"\n";
    }
}