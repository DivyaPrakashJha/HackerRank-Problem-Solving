#include<bits/stdc++.h>

using namespace std;

int main(){
    int steps;
    cin>>steps;

    string path;
    cin>>path;

    int level = 0, num_of_valleys = 0;

    for (int i = 0; i< steps; i++){
        int temp = level;
        
        if (path[i]=='U'){
            level += 1;
        }
        else if (path[i]=='D'){
            level -= 1;
        }

        if (temp<0 && level==0){
            num_of_valleys+=1;
        }
    }
    cout<<num_of_valleys;
return 0;
}