#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
	cin >> N;
	int tmp, result = 0;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		result ^= tmp;
	}
	cout << result;

}