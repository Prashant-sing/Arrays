#include<bits/stdc++.h>
using namespace std;
int findMaxsum(int arr[],int n){
     int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0] , arr[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(arr[i]+dp[i-2] , dp[i-1]);
    }
    
    return dp[n-1];
    // if(n==0)
    // return 0;

    // int value1 = arr[0];
    // if(n==1)
    // return value1;
    // int value2 = max(arr[0],arr[1]);
    // if(n==2)
    // return value2;
    
    // int max_sum = 0;
    // for (int i = 2; i < n; i++) {
	//         max_sum = max(arr[i] + value1, value2);
	//         value1 = value2;
	//         value2 = max_sum;
	//     }

	//     return max_sum;
}
int main(){
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findMaxsum(arr,n);
    return 0;
}