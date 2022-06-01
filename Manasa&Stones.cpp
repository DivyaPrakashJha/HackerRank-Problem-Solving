#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0; cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        set<int> s;
        for (int i = 0; i < n; i++) {
          s.insert(i * a + (n - 1 - i) * b);
    }

    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        if (it != s.begin()) cout << " ";
        cout << *it;
    }
    cout << "\n";
  }

}