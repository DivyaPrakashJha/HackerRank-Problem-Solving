#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int hr, min, sec;
    char c1, c2;
    scanf("%d:%d:%d%c%c", &hr, &min, &sec, &c1, &c2);
    if (c1 == 'A' && hr == 12){
        hr = 0;
        printf("%02d:%02d:%02d", hr, min, sec); 
    }
    else if (c1 == 'P' && hr == 12){
            printf("%02d:%02d:%02d", hr, min, sec);
    }
    else if (c1 == 'P'){
            hr = hr + 12;
            printf("%02d:%02d:%02d", hr, min, sec);    
    }
    else{
        printf("%02d:%02d:%02d", hr, min, sec);
    }

    return 0;
}
