#include<bits/stdc++.h>

using namespace std;

int reverse(int num){
    int reversed_num = 0;
    while (num>0){
        int digit = num%10;
        reversed_num = reversed_num*10 + digit;
        num=num/10;
    }

    return reversed_num;
}

int main(){
    int i, j, k;
    cin>>i>>j>>k;

    int count = 0;

    for (int l = i; l<=j; l++){
        int temp;
        temp = reverse(l);
        if ((l - temp)%k==0){
            count+=1;
        }
    }
    cout<<count;
return 0;
}