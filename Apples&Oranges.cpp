#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges);
    
    int main(){
        int s, t, a, b, m, n;
        cin>>s>>t;
        cin>>a>>b;
        cin>>m>>n;
        
        vector<int>apples;
        vector<int>oranges;
        
        for (int i = 0; i< m; i++){
            int app;
            cin>>app;
            apples.push_back(app);
        }
        
        for (int j = 0; j< n; j++){
            int orr;
            cin>>orr;
            oranges.push_back(orr);
        }        
        
        countApplesAndOranges(s, t, a, b, apples, oranges);
        
     return 0;   
    }
    
    void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int num_app = apples.size();
    int num_orr = oranges.size();
    int count_apples = 0;
    int count_oranges = 0;

    for (int i = 0; i < num_app; i++)
    {
        if (a + apples[i] >= s && a + apples[i] <= t)
        {
            count_apples += 1;
        }
    }
        for (int j = 0; j < num_orr; j++)
        {
            if (b + oranges[j] >= s && b + oranges[j] <= t)
            {
                count_oranges += 1;
            }
        }
        cout << count_apples << "\n"
             << count_oranges;
}