#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, x1;
    cin>>n;
    int max = 0, min = 0;
    
    set<int>score;
    cin>>x1;
    score.insert(x1);
    
    for(int i = 1; i<n ;i++){
        cin>>x;
        auto var1 = score.begin();
        auto var2 = score.end();
        var2--;
        
        if (x<*var1){
            min+=1;
        }
        else if (x>*var2){
            max+=1;
        }
        score.insert(x);
    }
    cout<<max<<" "<<min;
    
    return 0;
}