#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n, count = 0;
    cin>>n;

    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a'){
            count+=1;
        }
    }

    count = count * floor(n/len);
    
    for (int i = 0; i< n % len; i++){
        if (s[i] == 'a'){
            count ++;
        }
    }

    cout << count;

}