#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, d, m, res = 0;
    cin>>n;

    vector<int> ch_num(n);

    for (int i =0; i<n; i++){
        cin>>ch_num[i];
    }

    cin>>d>>m;

    for (int j = 0; j<n-m+1; j++){
        int sum = 0;
        for (int k = 0; k<m; k++){
            sum = sum + ch_num[j+k];
        }
        if (sum == d){
            res = res +1;
        }
    }

    cout<<res;
    
return 0;
}



// #include<bits/stdc++.h>

// using namespace std;

// int main(){
    
//     int n, d, m, res = 0;
//     cin>>n;

//     int ch_num[n];

//     for (int i =0; i<n; i++){
//         cin>>ch_num[i];
//     }

//     cin>>d>>m;

//     for (int j = 0; j<n-m+1; j++){
//         int sum = 0;
//         for (int k = 0; k<m; k++){
//             sum = sum + ch_num[j+k];
//         }
//         if (sum == d){
//             res = res +1;
//         }
//     }

//     cout<<res;
    
// return 0;
// }