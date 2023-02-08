#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &a, int key)
    {
        int low = 0, high = a.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) >> 1;
            if (a[mid] == key)
                return mid;
            // Check, which array is Sorted
            if (a[low] <= a[mid])
            { // left half is sorted
                if (key >= a[low] && key <= a[mid])
                    high = mid - 1; // key is present in left half ,eliminate right half
                else
                    low = mid + 1; // key is present in right half ,eliminate left half
            }
            else
            {                                        // Right half is Sorted
                if (key >= a[mid] && key <= a[high]) // key is present in right half
                    low = mid + 1;                   // eliminate left half
                else
                    high = mid - 1; // key is present in left half, eliminate right half
            }
        }
        return -1;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of vector " << endl;
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements in vector " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int target;
        cout << "Enter the value of target " << endl;
        cin >> target;
        Solution obj;
        cout << obj.search(nums, target);
    }
    return 0;
}
//    sort(nums.begin(),nums.end());
//        vector<vector<int>>res;
//         //Move for a
//         for(int i = 0; i < nums.end()-2; i++){
//         if(i == 0 || (i > 0 && nums[i] != nums[i-1])){   //so that a does not move to same 
//         int low = i+1,high = nums.size()-1,sum = 0-nums[i];  // element          
//          while(low < high){
//           if(nums[low] + nums[high] == sum){
//               vector<int>temp;
//               temp.push_back(nums[i]);
//               temp.push_back(nums[low]);
//               temp.push_back(nums[high]);
//               res.push_back(temp);
//          while(low<high && nums[low] == nums[low+1]) //So that low does not move to same element
//               low++;
//           while(low<high && nums[high] == nums[high-1])
//               h--;                           // So that high does not move to same element
              
//               low++; high--;      // so that low and high move to next different element
//           }
//           else if (nums[low]+nums[high]<sum) low++;
//              else  high--;
//          }       
//         }
//             return res;