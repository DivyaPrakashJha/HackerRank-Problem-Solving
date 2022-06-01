#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>c(n);

    for (int i = 0; i< n;i++){
        cin>>c[i];
    }
    
    int jumps = 0;
    
    int j = 0;
    int steps;
    
    while (j< n){
        if(c[j+2]!=1 && j+2<n){
            steps=2;
        }
        else{
            steps = 1;
        }
        j+=steps;
        jumps+=1;
    }
    cout<<jumps-1;
    
return 0;
}