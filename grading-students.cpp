#include<iostream>

using namespace std;

int main(){
    int n, i = 0; 
    cin>>n;
    int arr[n];
    while (i<n){
        cin>>arr[i];
        i++;
    }    
    
    int rem;
    for (int j = 0; j<n; j++){
        if (arr[j]%5 >=3 && arr[j]>37){
            rem = arr[j]%5;
            cout<<arr[j]+(5-rem)<<endl;
        }
        else{
            cout<<arr[j]<<endl;
        }
    }
    return 0;
}
