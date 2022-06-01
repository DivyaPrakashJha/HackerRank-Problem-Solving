#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cin>>n;
    for (i=1; i<(n+1); i++){
        for(j=0; j<n-i; j++){
            cout<<" ";
        }
        for (int k = 0; k < i; k++){
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}