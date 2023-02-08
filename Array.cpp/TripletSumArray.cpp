#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool find3numbers(int arr[], int n, int x){
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
             int low = i+1;
             int high = n-1;
             while(low<high){
                 if(arr[i]+arr[low]+arr[high] == x)
                     return true;
                 else if(arr[i]+arr[low]+arr[high]<x)
                 low++;
                 else
                 high--;
             }
             return false;
        }
        
    }
    //Using Map
    //  unordered_map<int,int> m;
    //     int val;
    //     for(int i=0;i<n;i++)
    //     {
    //         m[a[i]]++;
    //     }
        
    //     for(int i=0;i<n;i++)
    //     {
    //         val=k-a[i];
    //         for(int j=i+1;j<n;j++)
    //         {
    //             if(val-a[j]==a[j] && m[val-a[j]]<=1)
    //             {
    //                 continue;
    //             }
    //             if(m[val-a[j]]>=1)
    //             {
    //                 return 1;
    //             }
    //         }
    //     }
    //     return 0;
};
int main(){
    int t;
    cout<<"Enter the value of testcases "<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of array "<<endl;
        cin>>n;
        int x;
        cout<<"Enter the value of sum "<<endl;
        cin>>x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        solution obj;
        cout<<obj.find3numbers(a,n,x)<<endl;
    }
    return 0;
}