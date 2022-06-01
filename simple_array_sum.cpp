#include<iostream>

using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    int arr[n];
    int sum = 0;
    for (i=0; i<n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum;
    
    return 0;
}
