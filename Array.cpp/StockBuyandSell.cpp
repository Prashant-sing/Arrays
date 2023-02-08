#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
       int maxProfit(vector<int>& prices){// Approach--> take out the minimum value first then 

           int mini = prices[0],maxi = 0;//traverse ahead of that minimum value to find the 
           for (int i = 0; i <  prices.size(); i++)//maximum value then return the difference 
           {                                    // of these two values
                mini = min(mini,prices[i]);
                maxi = max(maxi,prices[i]-mini);
           }
           return maxi;
       }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < v.size(); i++)
        {
            v.push_back(i);
        }
        Solution obj;
        cout<<obj.maxProfit(v);
    }
    return 0;
}