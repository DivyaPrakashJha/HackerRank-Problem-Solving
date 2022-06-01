#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n;

    string s;
    cin>>s;

    cin>>k;
    k=k%26;

    for (int i = 0; i < n; i++){
        int ord = int(s[i]);
        int temp = ord+k;
        int temp1;

        if (ord>=65 && ord<=90){
            if (temp>90){
                temp1= 64+(temp-90);
            }
            else{
                temp1= temp;
            }
        }

        else if (ord>=97 && ord<=122){
            if (temp>122){
                temp1= 96+(temp-122);
            }
            else{
                temp1= temp;
            }
        }

        else{
            temp1=ord;
        }
        char a = char(temp1);
        cout<<a;
    }    

}