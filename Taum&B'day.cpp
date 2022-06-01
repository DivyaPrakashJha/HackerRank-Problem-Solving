#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long long int>ans(t);

    for (int i = 0; i< t; i++){
        long long int b, w, bc, wc, z;
        cin>>b>>w;
        cin>>bc>>wc>>z;

        long long int cost;

        if (bc>=wc){
            if (z+wc<bc){
                cost = (wc*(b+w))+(z*b);
            }
            else{
                cost = (b*bc)+(w*wc);
            }
        }

        else if (bc<wc){
            if (z+bc<wc){
                cost = (bc*(b+w))+(z*w);
            }
            else{
                cost = (b*bc)+(w*wc);
            }
        }

        ans[i]=cost;
    }

    for (int j = 0; j< t; j++){
        cout<<ans[j]<<"\n";
    }
return 0;
}
