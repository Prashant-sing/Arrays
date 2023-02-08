#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int res = INT_MIN;
        // Area = min(height[left],height[right])*(right-left)
        while (left < right)
        {
            res = max(res, (min(height[left], height[right]) * (right - left)));
            height[left] < height[right] ? left++ : right--; // only small height matters
        }
        return res;
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
        vector<int> arr(n);
        cout << "Enter the elements in vector " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.maxArea(arr) << endl;
    }
    return 0;
}