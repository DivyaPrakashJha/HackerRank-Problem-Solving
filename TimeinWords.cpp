#include<bits/stdc++.h>

using namespace std;

int main(){
    int h, m;
    cin>>h>>m;

    string numsinwords[30] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half"
    };


    if (m<=30){
        if (m==0){
            cout<<numsinwords[h-1]<<" o' clock";
        }
        else if (m==15){
            cout<<"quarter past "<<numsinwords[h-1];
        }
        else if (m==30){
            cout<<"half past "<<numsinwords[h-1];
        }
        else if (m==1){
            cout<<"one minute past "<<numsinwords[h-1];
        }
        else {
            cout<<numsinwords[m-1]<<" minutes past "<<numsinwords[h-1];
        }
    }
    else if (m>30){
        if (m==45){
            cout<<"quarter to "<<numsinwords[h];
        }
        else if (m==59){
            cout<<"one minute to "<<numsinwords[h];
        }
        else{
            cout<<numsinwords[60-m-1]<<" minutes to "<<numsinwords[h];
        }
    }

return 0;
}