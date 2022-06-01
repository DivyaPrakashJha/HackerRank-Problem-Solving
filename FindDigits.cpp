#include<bits/stdc++.h>

using namespace std;

vector <int> digits(int num){
    vector<int>v;
    v.clear();
    int digit;
    while (num>0){
        digit = num % 10;
        num = num / 10;
        v.push_back(digit);
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    vector<int> nums(t);
    for (int i= 0; i< t;i++){
        cin>>nums[i];
    }

    vector<int>counts;
    for (int j = 0; j< t; j++){
        int count = 0;
        vector<int>v1 = digits(nums[j]);
        for (int k = 0; k<v1.size(); k++){
            if ((v1[k]!=0) && (nums[j]%v1[k]==0)){
                count+=1;
            }
        }
        cout<<count<<"\n";
    }


return 0;
}       