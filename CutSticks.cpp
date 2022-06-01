#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    
    cin >> n;           
    cout << n << endl;  
    
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }           
    
    sort(arr, arr + n);        
    
    for (int i = 0; i < n-1; i++) {
        if (arr[i] != arr[i+1])     
            cout << n-(i+1) << endl; 
    }      
                          
    return 0;
}