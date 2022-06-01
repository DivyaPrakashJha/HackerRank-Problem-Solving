#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int people = 5;
    int like, cummulative_likes=0;
    for (int i = 0; i< n; i++){
        like = floor(people/2);
        people = like*3;
        cummulative_likes= cummulative_likes+like; 
    }

    cout<<cummulative_likes;

    
return 0;
}