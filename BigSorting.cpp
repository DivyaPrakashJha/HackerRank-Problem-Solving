#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<string> unsorted(n);
    
    for(int i = 0; i < n; i++){
       cin >> unsorted[i];
    }

    sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });
    
    for (auto it:unsorted) {
        cout << it << endl;
    }

}