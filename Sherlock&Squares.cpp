#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    vector < pair<long long int, long long int> > v;
    for (int i = 0; i< q; i++){
        long long int a, b;
        cin>>a>>b;
        v.push_back({a, b});
    }

    for (int i = 0; i< q; i++){
        long long int count;
        long long int start = v[i].first;
        long long int end = v[i].second;

        long double sq_start = sqrt(start);
        long double sq_end = sqrt(end); 
        
        count = floor(sq_end) - floor(sq_start);
        
        if (sq_start - floor(sq_start) == 0){
            cout<<count+1<<"\n"; // inclusive range
        }
        else{
             cout<<count<<"\n";
        }
    
    }
return 0;
}