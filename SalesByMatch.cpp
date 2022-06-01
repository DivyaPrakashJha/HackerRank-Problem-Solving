#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[101]={0};

    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr[j] += 1;
    }

    int total=0;
    for(int i=0;i<101;i++){
        if(arr[i]> 1){
            if(arr[i] % 2 == 0){
                total += (arr[i] / 2);
            } 
            else {
                total += ((arr[i]-1) / 2);
            }
        }
    }

    cout<<total;
       
    
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int,int> m;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         m[arr[i]]++;
//     }
//     int res=0;
//     for(auto &x:m){
//         res+=x.second/2;
//     }
//     cout<<res<<"\n";
//     return 0;
// }