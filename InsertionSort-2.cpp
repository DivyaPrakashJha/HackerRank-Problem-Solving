#include<bits/stdc++.h>

using namespace std;


void insertionSort(int N, int arr[]) {

    int i,j;
    int value;

    for(i=1;i<N;i++){

        value=arr[i];
        j=i-1;

        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;

        // loop for printing the steps
        for(j=0;j<N;j++){
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
}


int main(void) {

    int N;
    cin>>N;
    int arr[N], i;
    for(i = 0; i < N; i++) {
        cin>>arr[i];
    }

    insertionSort(N, arr);
    

    return 0;
}