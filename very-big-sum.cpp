#include<iostream>

using namespace std;

int main(){
    int n, i;
    cin>>n;
    long int arr[n];
    long int sum = 0;
    for (i=0; i<n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum;    
    
    return 0;
}