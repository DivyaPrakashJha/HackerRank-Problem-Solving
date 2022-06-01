#include<bits/stdc++.h>

using namespace std;

int main(){
    int d1, m1, y1, d2, m2, y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    int fine;

    if (y2 == y1){
        if (m1==m2){
            if (d1<=d2){
                fine = 0;
            }
            else if (d1>d2){
                int temp = d1 - d2;
                fine = 15 * temp;
            }

        }
        else if (m1<m2){
            fine = 0;
        }
        else if (m1>m2){
            int temp = m1-m2;
            fine = 500 * temp;
        }
    }
    else if (y1>y2){
        fine = 10000;
    }

    cout<<fine;

return 0;
}