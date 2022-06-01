#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>subjects(n);
    vector<int>odd;
    vector<int>index;

    for (int i = 0; i< n; i++){
        cin>>subjects[i];

        if (subjects[i]%2==1){
            odd.push_back(subjects[i]);
            index.push_back(i);
        }
    }

    int sum = 0;

    if (odd.size()%2==1){
        cout<<"NO";
    }
    else{
        for (int i = 0; i< index.size(); i+=2){
            int temp;
            temp = index[i+1]-index[i];
            sum = sum + temp;
        }
        cout<<sum*2;
    }

return 0;
}