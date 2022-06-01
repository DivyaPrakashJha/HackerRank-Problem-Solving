#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, v1, x2, v2; 
    int flag = 0;
    
    cin>>x1>>v1>>x2>>v2;
    int d1 = x1, d2 = x2;
    
    if (d1 == d2) {
        flag = 1;
    }
    
    for (int i = 0; flag == 0 && d1 <= d2; i++) {
        d1 += v1;
        d2 += v2;
        
        if (d1 == d2) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    return 0;
}