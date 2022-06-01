#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i< n; i++){
        cin>>arr[i];
    }

    vector<int>subarraylen;

    for (int i = 0; i< n; i++){
        int count = 0;
        int count1 = 0;
        for (int j =i; j< n; j++){
            int ab = abs(arr[i]-arr[j]);
            
            if (ab<=1 && arr[i]>=arr[j]){
                count+=1;
                subarraylen.push_back(count);
            }
            if (ab<=1 && arr[i]<=arr[j]){
                count1+=1;
                subarraylen.push_back(count1);
            }

        }
    }

    sort(subarraylen.begin(), subarraylen.end());
    int size = subarraylen.size();
    cout<<subarraylen[size-1];

return 0;
}