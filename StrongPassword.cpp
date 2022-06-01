#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin(),v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;

    string special_characters = "!@#$%^&*()-+";

    int num = 0, lower = 0, upper = 0, special = 0;

    for (size_t i = 0; i < n; i++){
        char x = s[i];
        
        if (int(x)>=48 && int(x)<=57){
            num=1;
        }
        else if (int(x)>=97 && int(x)<=122){
            lower = 1;
        }
        else if (int(x)>=65 && int(x)<=90){
            upper = 1;
        }
        else{
            for (int k = 0; k<12; k++){
                for (int l = 0; l< s.length(); l++){
                    if (s[l]==special_characters[k]){
                        special = 1;
                    }
                } 
            }
        }       
    }

    int len = s.length();
    int temp = 4 - (num+lower+upper+special);

    if (len+temp<6){
        cout<<6-(s.length()+temp)+temp;
    }
    else{
        cout<<temp;
    }
    

}