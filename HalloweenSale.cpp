#include<bits/stdc++.h>

using namespace std;

int main(){
    int p, d, m, s;
    cin>>p>>d>>m>>s;

    int cost = 0, count = 0;

    while (cost<=s){
        cost = cost + p;
        if (p-d>=m){
            p-=d;
        }
        else{
            p=m;
        }

        count+=1;
    }

    cout<<count-1;

return 0;
}