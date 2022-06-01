#include<bits/stdc++.h>

using namespace std;

bool is_leap(int year){
    bool leap;

    if (year<1918){
        if (year%4==0){
            leap = true;
        }
        else{
            leap = false;
        }
    }

    else if (year>=1918){
        if (year%400==0){
            leap = true;
        }
        else if (year%4 == 0 && year%100!=0){
            leap = true;
        }
        else {
            leap = false;
        }
    }

    return leap;
}

int main(){
    int year;

    cin>>year;
    bool leap = is_leap(year);

    int dd, mm, yyyy;

    // jan = 31
    // feb_non-leap = 28
    // feb_leap = 29
    // feb_1918 = 15
    // mar= 31
    // apr = 30
    // may = 31
    // june = 30
    // july = 31
    // aug = 31
    // sep = 30
    // oct = 31
    // nov = 30
    // dec = 31

    if (year == 1918){
        yyyy = 1918;
        mm = 9;
        dd = 256-230;
    }
    else{
        if (leap == true){
            yyyy = year;
            mm = 9;
            dd = 256-244;
        }
        else if (leap == false){
            yyyy = year;
            mm = 9;
            dd = 256-243;
        }
    }

    cout<<dd<<".0"<<mm<<"."<<yyyy;

return 0;
}