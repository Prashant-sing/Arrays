#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int>> ThreeSum(vector<int> &nums,int target){
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++)
        {
            int l = i+1, h = n-1; 
            while(l<h){
             if(nums[i]+nums[l]+nums[h] == target){
                ans[i].push_back(i);
                ans[i+1].push_back(l);
                ans[i+2].push_back(h);
             }
             else if(nums[i]+nums[l]+nums[h] < target) l++;
             else h--;
        }
      }
      return ans; 
    }
};
int main(){
    int t; 
    cout<<"Enter the testcases "<<endl;
    cin>>t;
    while(t--){
        vector<int> nums;
        cout<<"Enter the elements in nums "<<endl;
        for(int i = 0; i < nums.size(); i++){
            cin>>nums[i];
        }
        int target;
        cout<<"Enter the value of target "<<endl;
        cin>>target;
        Solution obj;
        vector<vector<int>> result = obj.ThreeSum(nums,target);
        for(int i = 0; i < result.size(); i++){
          cout<<result[i]<<" ";
        }
          cout<<endl;
    }
    return 0;
}