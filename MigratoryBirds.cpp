#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> birds;
    
    for (int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        birds.push_back(temp);
    }
    
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    
    for(int j = 1; j<n; j++){
        if (birds[j]==1){
            count1+=1;
        }
        else if (birds[j]==2){
            count2+=1;
        }
        else if (birds[j]==3){
            count3+=1;
        }
        else if (birds[j]==4){
            count4+=1;
        }
        else if (birds[j]==5){
            count5+=1;
        }
    }
    
    vector<pair<int, int>>v;
    v.push_back({count1, 1});
    v.push_back({count2, 2});
    v.push_back({count3, 3});
    v.push_back({count4, 4});
    v.push_back({count5, 5});
    
    sort(v.begin(), v.end());
    
    for (int m = 0; m< 5; m++){
        if (v[m].first == v[4].first){
            cout<<v[m].second;
            break;
        }  
    }
     
    return 0;
}