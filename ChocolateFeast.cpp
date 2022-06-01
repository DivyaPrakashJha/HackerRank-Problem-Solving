#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, c, m;
    cin>>t;
    int a[t][3];
    for (int i = 0; i< t; i++){
        cin>>n>>c>>m;
        a[i][0]=n;
        a[i][1]=c;
        a[i][2]=m;
    }

    for(int j = 0; j< t;j++){


        int money = a[j][0];
        int cost = a[j][1];
        int num_wrapper_1 = a[j][2];

        int num_bars = money/cost;
        int wrappers = num_bars;
        while(wrappers>=num_wrapper_1){
            int temp;
            temp = wrappers/num_wrapper_1;
            num_bars = num_bars + temp;
            wrappers = wrappers - (temp*num_wrapper_1) + temp;
        }
        cout<<num_bars<<"\n";
    }
return 0;
}