#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    int a[q][3];

    for (int i = 0; i< q; i++){
        for (int j = 0; j< 3; j++){
            cin>>a[i][j];
        }
    }

    for (int k = 0; k<q; k++){
        if ( abs(a[k][0]-a[k][2]) > abs(a[k][1]-a[k][2]) ){
            cout<< "Cat B\n";
        }
        if ( abs(a[k][0]-a[k][2]) < abs(a[k][1]-a[k][2]) ){
            cout << "Cat A\n";
        }
        if ( abs(a[k][0]-a[k][2]) == abs(a[k][1]-a[k][2]) ){
            cout << "Mouse C\n";
        }
    }

return 0;
}
