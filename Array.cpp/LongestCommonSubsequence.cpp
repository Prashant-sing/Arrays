#include<iostream>
using namespace std;
class Solution{
    public:
     int lcs(string s, string t){
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,s,t,dp);
     }
};
int main(){
    string s1 = "BloodX";
    string s2 = "Beast";
    Solution obj;
    cout<<obj.lcs(string s1 ,string s2);
    return 0;
}