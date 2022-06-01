#include<bits/stdc++.h>

using namespace std;

int main(){
    int b, n, m;
    cin>>b>>n>>m;

    vector<int>keyboard(n);
    vector<int>usb(m);

    for (int i=0; i<n; i++){
        cin>>keyboard[i];
    }
    for (int i=0; i<m; i++){
        cin>>usb[i];
    }

    vector<int>combo;
    combo.push_back(-1);

    for (int j =0; j<n; j++){
        for (int k = 0; k<m; k++){
            int sum = keyboard[j]+usb[k];
            if (sum<=b){
                combo.push_back(sum);
            }
        }
    }

    sort(combo.begin(), combo.end());
    int size = combo.size();
    cout<<combo[size-1];

return 0;
}
