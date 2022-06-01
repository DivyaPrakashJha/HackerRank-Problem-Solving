#include<iostream>

using namespace std;

int main(){
    int i, n;
    int diag1 = 0, diag2 = 0;
    cin>>n;
    int arr[n][n];
    
    for (int h = 0; h < n; h++)
    {
        for(i = 0; i<n ; i++){
        cin>>arr[h][i];
        }
        diag1 = diag1 + arr[h][h];
        diag2 = diag2 + arr[h][n-(h+1)];
    }

    int diff;
    diff = diag1 - diag2;
    
    if (diff < 0){
        diff = diff * (-1);
    }
    cout<<diff;
    
    return 0;
}
