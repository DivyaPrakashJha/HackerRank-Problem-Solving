#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    getline(cin, s);

    for (int i = 0; i< s.size(); i++){
        if (int(s[i]) == 32){
            s.erase(i, 1);
        }
    }

    int len = s.size();

    double root = sqrt(len);

    int row = floor(root);
    int column = ceil(root);

    for (int j = 0; j < column; j++){
        for (int i =j; i< s.size(); i+=column){
            cout<<s[i];
        }
        cout<<" ";
    }


}