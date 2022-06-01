#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main(){
    int n, i;
    
    cin>>n;
    int arr[n];
    float plus=0, minus=0, zero=0;
    for (i=0; i<n; i++){
        cin>>arr[i];
        
        if (arr[i]>0){
            plus++;
        }
        else if(arr[i] == 0){
            zero++;
        }
        else if(arr[i]<0){
            minus++;
        }
    }
    float p, m, z;
    p = plus/n;
    m = minus/n;
    z = zero/n;
    
    printf("%f\n%f\n%f\n", p, m, z);
    
    return 0;
}