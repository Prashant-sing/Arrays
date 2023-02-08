#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>  productxceptself(vector<int>& nums){
               int n = nums.size();
        vector<int> vec(n, 1);
        if (n == 1) 
        {
            return vec;
        }
        
        // In this loop temp will store the product of values on the left side of nums[i]
        int temp = 1;
        for(int i = 0;i < n;i++) 
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        // In this loop temp will store the product of values on the right side of nums[i]
        temp = 1;
        for(int i = n - 1;i >= 0;i--)
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        
        return vec; // return the expected vector  
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>arr(n),output(n);
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     Solution obj;
     output = obj.productxceptself(arr);
     for (int i = 0; i < n; i++)
     {
          cout<<arr[i]<<" ";
     }
     cout<<endl;
    }
    return 0;
}
//         int n = nums.size();
//         vector<int> vec(n, 1);
//         if (n == 1) 
//         {
//             return vec;
//         }
        
//         // In this loop temp will store the product of values on the left side of nums[i]
//         int temp = 1;
//         for(int i = 0;i < n;i++) 
//         {
//             vec[i] *= temp;
//             temp *= nums[i];
//         }
        
//         // In this loop temp will store the product of values on the right side of nums[i]
//         temp = 1;
//         for(int i = n - 1;i >= 0;i--)
//         {
//             vec[i] *= temp;
//             temp *= nums[i];
//         }
        
        
//         return vec; // return the expected vector

        // int n = nums.size();
        // vector<int>right(n);
        // right[n-1] = 1;
        // for(int i = n-2; i >= 0; i--){
        // right[i] = right[i+1]*nums[i+1];
        // }
        // vector<int>res;
        // int left = 1;
        // for(int i = 0; i < n;i++){
        //     res.push_back(left*right[i]);
        //     left *= nums[i];
        // }
        // return res;