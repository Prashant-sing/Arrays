#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> SubarraySum(int arr[], int n, long long sum)
    {
        int left = 0, currsum = 0;
        for (int i = 0; i < n; i++)
        {
            currsum += arr[i];
            while (currsum > sum)
            {
                currsum -= arr[left];
                left++;
            }
            if (currsum == sum)
                return {left + 1, i + 1}; // left+1 as ans is based on
                                          // 1 based indexing
        }
        return {-1};
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> ans;
        ans = obj.SubarraySum(arr, n, s);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << "   " << endl;
    }
    return 0;
}