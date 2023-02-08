#include<bits/stdc++.h>
using namespace std;
class Solution{
         public:
       int maxSumOfNormalSubArray(int arr[], int n) {
        int currSum=arr[0];
        int currMax=arr[0];
        for (int i=1; i<n; i++) {
            currSum=max(currSum+arr[i], arr[i]);
            currMax=max(currMax, currSum);
        }
        return currMax;
    }
    
    /**
     * maxSumOfCircularSubarray=TotalSum - minSumOfNormalSubarray
     * maxSumOfCircularSubarray=TotalSum + maxSumOfInvertedSubarray
    */
    int maxSumOfCircularSubarray(int arr[], int n) {
        /**
         * Computing total sum of the array, also inverting the array values.
        */
        int totalSum=0;
        for (int i=0; i<n; i++) {
            totalSum+=arr[i];
            arr[i]=-arr[i];//Reversing the sign of array
        }
        
        return totalSum+maxSumOfNormalSubArray(arr, n);
    }
    
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        // your code here
        
        /**
         * Two Cases: 
         * 1. When the maximum subarray is not circular
         * 2. When the maximum subarray is circular.
         * Answer would be max of case 1 and case 2
        */
        int a=maxSumOfNormalSubArray(arr, num);
        int b=maxSumOfCircularSubarray(arr, num);
        
        /**
         * Corner case: When all elements are -ve.
         * maxSumOfNormalSubArray = max(arr), and it will be -ve
         * maxSumOfCircularSubarray = TotalSum - minSumOfNormalSubarray
         * minSumOfNormalSubarray = sum(arr), adding all the -ve elements would give us the minimum sum
         * 
         * => maxSumOfCircularSubarray = TotalSum - sum(arr)
         * Since TotalSum == sum(arr) 
         * => maxSumOfCircularSubarray = 0
         * Which means sum of an empty subarray. This is wrong as empty subarrays are not allowed.
         * 
        */
        if (a<0) {
           return a; 
        }
        else {
            return max(a, b);    
        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
           cin>>arr[i];
        }
        Solution obj;
        cout<<obj.circularSubarraySum(arr,num)<<endl;
    }
    return 0;
}
// public:
//     int kadane(int arr[],int n){
//         int currsum = 0,sum = 0,maxsum = INT_MIN,M = INT_MIN, N = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             if(arr[i]<0)
//             sum += arr[i];

//             currsum += arr[i];
//              if(currsum<0)
//             currsum = 0;

//             M = max(maxsum,currsum);
//             N = max(M,sum);
//         }
//         return N;
//     }

//     public:
//     int circularSubarraySum(int arr[], int num){
//         int wrapsum,nonwrapsum;
//         nonwrapsum = kadane(arr,num);
//         int totalsum = 0;
//         for(int i = 0; i <num; i++){
//             totalsum += arr[i];
//             arr[i] =- arr[i];
//         }
       
//       wrapsum = totalsum + kadane(arr,num);
//       int n = max(wrapsum,nonwrapsum);
//       return n;
//     }