#include<iostream>

using namespace std; 

int main(){
    int i=0;
    long int arr[5];
    while (i<5){
        cin>>arr[i];
        i++;        
    }
    long int sum, maxsum, minsum, max, min;
    max = arr[0];
    min = arr[0];
    
    for (int j = 0; j<5; j++){
        sum = sum + arr[j];
    }
    
    for (int k=0; k<5; k++){
            if (arr[k]>max){
                max = arr[k];
            }   
            if (arr[k] < min){
                min = arr[k];
            }
    }
    maxsum = sum - min;
    minsum = sum - max;
    cout<<minsum<<" "<<maxsum;
    
}
