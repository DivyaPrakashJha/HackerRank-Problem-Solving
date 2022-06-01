#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    vector<int>distances;
    
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            if (arr[i]==arr[j] && i!=j){
                int temp;
                temp = abs(i-j);
                distances.push_back(temp);
            }
        }
    }
    
    if (distances.size()>=1){
            sort(distances.begin(), distances.end());
            cout<<distances[0];
    }
    else{
        cout<<-1;
    }


return 0;
}