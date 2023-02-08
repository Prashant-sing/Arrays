#include<iostream>
#include<climits>
using namespace std;
class solution{
    public:
    long long maxSubarraysum(int arr[],int n){
        long long maxsum = arr[0];
        long long currsum = arr[0];
        for (int i = 0; i < n; i++)
        {
             currsum += arr[i];
             if(currsum < arr[i])
             currsum = arr[i];
             
             if(maxsum < currsum)
             maxsum = currsum;
        }
        return maxsum;
    }
};
int32_t main(){
    int t;
    cout<<"Enter the value of testcases "<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of array "<<endl;
        cin>>n;
        cout<<"Enter the values in array "<<endl;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        solution obj;
        cout<<obj.maxSubarraysum(arr,n)<<endl;
    }
  
}