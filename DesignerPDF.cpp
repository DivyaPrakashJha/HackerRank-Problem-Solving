#include<bits/stdc++.h>

using namespace std;

int main(){
    map<char, int>m;
    for (char i = 'a'; i<'{'; i++){
        int temp;
        cin>>temp;
        m[i]=temp;
    }

    string word;
    cin>>word;

    int len = word.size();

    vector<int>heights;

    for (int i = 0; i <len; i++){
        char temp;
        temp=word[i];
        heights.push_back(m[temp]);
    }

    sort(heights.begin(), heights.end());

    int height = heights[len-1];

    cout<<len*height;

return 0;
}