#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, amt_paid;
    cin>>n >>k;

    vector<int>bill;

    for (int i = 0; i<n ; i++){
        int temp, amt_paid;
        cin>>temp;
        bill.push_back(temp);
    }

    cin>>amt_paid;

    int a_total, sum = 0;
    for (int i = 0 ; i < n; i++){
        sum = sum +bill[i];
    }
    a_total = (sum - bill[k])/2;

    if (a_total == amt_paid){
        cout<<"Bon Appetit";
    }
    else {
        cout<<amt_paid-a_total;
    }

}