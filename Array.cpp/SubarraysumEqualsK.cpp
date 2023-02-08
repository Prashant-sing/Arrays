#include <bits/stdc++.h>
using namespace std;

// Function to find number of subarrays with sum exactly
// equal to k.
int findSubarraySum(int arr[], int n, int sum)
{
    // STL map to store number of subarrays starting from
    // index zero having particular value of sum.
    unordered_map<int, int> prevSum;

    int res = 0;

    // Sum of elements so far.
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {

        // Add current element to sum so far.
        currSum += arr[i];

        // If currsum is equal to desired sum, then a new
        // subarray is found. So increase count of
        // subarrays.
        if (currSum == sum)
            res++;

        /* If [(currsum-sum) = Value(assume)] is present in the map, means the freq. of Value is
           already 1, it means [(currsum's Array - sum's Array) = required Subarray]. Hence
           increase the value of count.
                 Sum             Required Subarray
            <------------><----------------------------->
            <------------------------------------------->
                              Currsum
        */
        if (prevSum.find(currSum - sum) != prevSum.end()) // It means required subarray is present
            res += (prevSum[currSum - sum]);

        prevSum[currSum]++; // It means you didn't get that required subarray, keep moving ahead
                            //  and keep increasing frequency for all currsums
    }

    return res;
}

int main()
{
    int arr[] = {3, 9, -2, 4, 1, -7, 2, 6, -5, 8, -3, -7, 6, 2, 1};
    int sum = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSubarraySum(arr, n, sum);
    return 0;
}
/*
     BRUTE FORCE
int main(){
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j  < n; j++){
            sum += arr[j];
            if(sum == k)
            cnt++;
        }
    }
    return cnt;
}
*/