#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>hurdles;

    for (int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        hurdles.push_back(temp);
    }
    sort(hurdles.begin(), hurdles.end());
    int max = hurdles[n-1];

    if (k>max){
        cout<<0;
    }
    else{
        cout<<max-k;
    }
return 0;
}