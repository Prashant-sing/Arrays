#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[], int n);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<max_sum(a,n)<<endl;
    }
    return 0;
}
int max_sum(int arr[], int n){
    //Compute the sum of all array elements
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
         curr_sum += arr[i];
    }
    //compute the sum of a*arr[i] 
    int curr_value = 0;
    for (int i = 0; i < n; i++)
    {
        curr_value += (i*arr[i]);
    }
    int res = curr_value;
    for (int i = 1; i < n; i++)
    {
        int next_value = curr_value - (curr_sum-arr[i-1])+ (n-1)*arr[i-1];
        curr_value = next_value;
    }
    res = max(res,curr_value);
    return res;
}