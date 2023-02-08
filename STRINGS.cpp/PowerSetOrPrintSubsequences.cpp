#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
      vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
    vector<vector<int>> ans(1 << n); 
    for(int i = 0; i < (1 << n); i++){  // running the loop till 1 << n = 2^n-1 because there         are 2^n-1 subsets
        for(int j = 0; j < n; j++){
        if(i & (1 << j)){//Checking the jth bit of ith bitwise no. is set or not, if it is set print it
            ans[i].push_back(nums[j]);
        }
        }
    }
    return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
       vector<int> nums = {1,2,3};
       vector<vector<int>>res;
       Solution obj;
       res = obj.subsets(nums);
       for (int i = 0; i < res.size(); i++)
       {
          for (int j = 0; j < res[0].size(); j++)
          {
            cout<<res[i][j]<<"  ";
          }
          cout<<endl;
       }
       
    }
    return 0;
}

//class Solution{
   // public:
    //Using Recursion
    // vector<string> ans;
    // void f(string s, int ind = 0, string  curr = ""){
    //     if(ind == s.size()){
    //         ans.push_back(curr);
    //         return;
    //     }
    //     f(s, ind + 1, curr);//Not Take
    //     f(s, ind + 1, curr + s[ind]); //Take
    // }
    // vector<string> AllpossibleSubstrings(string s){
    //       f(s);
    //       return ans;
    // }
//};

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         vector<string> res;
//         Solution obj;
//         res = obj.AllpossibleSubstrings(s);
//         for(auto i : res){
//             cout<<i<<"  ";
//             cout<<endl;
//         }
//     }
//     return 0;
// }