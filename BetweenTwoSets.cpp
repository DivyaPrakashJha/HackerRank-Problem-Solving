#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, nums=0;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i< n; i++){
        cin>>a[i];
    }
    for (int i = 0; i< m ;i++){
        cin>>b[i];
    }


    for (int i = 1; i<101; i++ ){

        bool is_ans = true;

        for (int j = 0; j<n; j++){
            if (i%a[j]!=0){
                is_ans = false;
            }
        }

        for (int k = 0; k<m; k++){
            if (b[k]%i!=0){
                is_ans = false;
            }
        }

        if (is_ans == true){
            nums++;
        }

    }
    cout<<nums<<" ";

return 0;
}
