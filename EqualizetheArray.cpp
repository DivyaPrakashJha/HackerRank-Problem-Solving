#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);

    for (int i = 0; i< n; i++){
        cin>>v[i];
    }

    vector<int>w;
    
    
    for(int i = 0; i< n; i++){
        int count = 0;
        int temp = v[i];
        for(int j = 0; j< n; j++){
            if (temp!=v[j]){
                count+=1;
            }
        }
        w.push_back(count);

    }

    sort(w.begin(), w.end());
    cout<<w[0];

return 0;
}