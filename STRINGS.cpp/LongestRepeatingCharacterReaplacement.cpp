#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int characterReplacement(string s ,int k){
        int n = s.size();
        int l = 0;//opening window
        int r = 0;//closing window
        int res = 0;
        int maxcount = 0;
        unordered_map<char,int>count;
        while(r < n){
            count[s[r]]++;
            maxcount = max(maxcount,count[s[r]]);
            if(r-l+1 - maxcount > k){//windowlen - maxcount = no. of elements(A) which are needed to be 
            count[s[l]]--;  //replaced,hence if A > k it means window is invalid. So we will shrink it
            l++;
            } 
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};
int main(){
    string s = "AABBABBA";
    int k;
    cin>>k;
    Solution obj;
    cout<<obj.characterReplacement(s,k);
    return 0;
}