#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int cycles[t];

    for(int i = 0; i< t; i++){
        cin>>cycles[i];
    }

    for(int i = 0; i < t; i++){
        int height = 0;
        int temp = cycles[i];
        for (int j = 0; j< temp+1; j++){
            if (j%2==1){
                height*=2;
            }
            else{
                height+=1;
            }
        }
        cout<<height<<"\n";
    }

return 0;
}
