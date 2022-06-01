#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin>>n;
    cin>>p;

    vector <pair<int, int>>book;
    for(int i = 0; i< n+1; i+=2){
        book.push_back({i, i+1});
    }

    int front, back;
    for (int i = 0; i<book.size(); i++){
        if(p == book[i].first || p == book[i].second){
            front = i;
            break;
        }
    }
    back = book.size() - front -1;

    if (front>=back){
        cout<<back;
    }
    else{
        cout<<front;
    }

return 0;
}