#include<bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin>>s1>>s2;

    int count = 0;

    int arr1[26] = {0};
    int arr2[26] = {0};

    for (int i = 0; i< s1.size(); i++){
        arr1[s1[i]-'a']++;
    }
    for (int i = 0; i< s2.size(); i++){
        arr2[s2[i]-'a']++;
    }

    for (int j = 0; j< 26; j++){
        count += abs( arr1[j] - arr2[j] );
    }


    cout<< count;

    
}   