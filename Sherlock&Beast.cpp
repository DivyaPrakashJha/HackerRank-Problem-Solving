#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<pair<int, int>>v;
    
    for(int i = 0; i< t; i++){
        int n;
        cin>>n;

        int numoffive = 0, numofthree = 0;

        int j= 0; 
        while (3*j<=n){
            j++;
        }
        j--;

        int temp;
        if (j>0){
            temp = n%(3*j);
        }

        if (n<3){
            numoffive = 0;
            numofthree = 0;
        }

        else if (temp==0){
            numoffive+=j*3;
        }

        else if (temp == 1){
            if ((j-3)*3+10==n && n>8){
                numoffive+=(j-3)*3;
                numofthree+=10;
            }
        }

        else if (temp == 2){
            if ((j-1)*3+5==n ){
                numoffive+=(j-1)*3;
                numofthree+=5;
            }
        }

        v.push_back({numoffive, numofthree});

    }

    for (int p = 0; p< t; p++){
            if (v[p].first==0 && v[p].second==0){
                cout<<"-1";
            }
            else if (v[p].first>=0 || v[p].second>=0){
                for(int l = 0; l< v[p].first; l++){
                    cout<<"5";
                }
                for(int m = 0; m<v[p].second; m++){
                    cout<<"3";
                }
            }

        cout<<"\n";
    }

return 0;
}