#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;

    vector<int>v(n);

    for (int i = 0; i< n; i++){
        cin>> v[i];
    }

    int x = 1, cnt = 0;
	for (int i = 0; i < n; i++) {
		int y = 0;
		for (int j = 1; j <= v[i]; j++) {
			if (j == x){
                cnt++;
            } 

			y++;

			if (y == k) {
				y = 0;
				x++;
			}
		}

		if (y) {
            x++;
        }
	}

	cout << cnt << endl;

}