#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin>>n; 
    int candles[n];
    for(int i = 0; i<n; i++){
        cin>>candles[i];        
    }
    int max = candles[0];
    for (int j = 0; j<n; j++){
        if (candles[j] > max){
            max = candles[j];
        }        
    }
    for (int k = 0; k<n; k++){
        if (candles[k] == max){
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
