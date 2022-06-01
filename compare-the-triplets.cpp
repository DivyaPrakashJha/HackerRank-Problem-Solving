#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, k;
    int a[3];
    int b[3];
    
    for (i=0; i<3; i++){
       cin>>a[i]; 
    }
    for (j=0; j<3;j++){
        cin>>b[j];
    }
    int pta = 0, ptb = 0;
    int res[2];
    for (k=0; k<3; k++)
    {
        if (a[k] > b[k])
        {
            pta++;
        }
        else if (a[k] < b[k])
        {
            ptb++;
        }
    
    }
    res[0] = pta;
    res[1] = ptb;
    
    cout<<pta<<" "<<ptb;
}
