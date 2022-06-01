#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>sticks(n);

    for(int i = 0; i< n; i++){
        cin>>sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    int is_nondeg = 0;

    vector<pair<long long int, vector<long long int> >>v;
    vector<long long int>s;


    for(int j = 0; j< n-2; j++){
        long long int sum = 0;
        
        if (sticks[j]<sticks[j+1]+sticks[j+2] &&
        sticks[j+1]<sticks[j]+sticks[j+2] &&
        sticks[j+2]<sticks[j+1]+sticks[j]){

            is_nondeg = 1;

            sum = sum+sticks[j]+sticks[j+1]+sticks[j+2];

            s.push_back(sticks[j]);
            s.push_back(sticks[j+1]);
            s.push_back(sticks[j+2]);

            sort(s.begin(), s.end());

            v.push_back({sum,s });
            s.clear();
        }
    }

    sort(v.begin(), v.end());

    if (is_nondeg == 0){
        cout<<"-1";
    }
    else {
        for(int j = 0; j< 3; j++){
            cout<<v[v.size()-1].second[j]<<" ";
        }
    }

    
return 0;
}