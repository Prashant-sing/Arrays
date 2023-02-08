#include <bits/stdc++.h>
using namespace std;
vector<int> Klargest(int arr[], int n, int k)
{
    //Using Min Heap(Ascending Order)
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k);
    for (int i = k; i < n; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        v.push_back(pq.top());
        pq.pop();
    }
    reverse(v.begin(),v.end());
    //sort(v.begin(), v.end(), greater<int>());
    return v;
    // //Using Max Heap(Descending Order)
    // priority_queue<int> pq;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     pq.push(arr[i]);
    // }
    // for (int i = 0; i < k; i++)
    // {
    //     v.push_back(pq.top());
    //     pq.pop();
    // }
    // return v;


    
    // int findKthLargest(vector<int>& nums, int k) {
    //       int n=nums.size();
    //     priority_queue<int,vector<int>,greater<int>>minh;
    //     for(int i=0;i<n;i++)
    //     {
    //         minh.push(nums[i]);
    //         if(minh.size()>k)minh.pop();
    //     }
    //     return minh.top();
    // }
}
int main()
{
    int arr[] = {3, 8, 22, 45, 78, 99, 23, 48};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the value of k " << endl;
    cin >> k;
    vector<int> res = Klargest(arr, n, k);
    for (auto i : res)
        cout << i << endl;
    return 0;
}