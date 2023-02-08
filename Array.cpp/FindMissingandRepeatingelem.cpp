#include<bits/stdc++.h>
using namespace std;
 class Solution{
     public:
     int *findtwoelements(int *arr,int n){
       int *ans=new int[2];
         unordered_map<int,int>umap;
       for(int i=0;i<n;i++)
       {
           umap[arr[i]]++;
       }
       for(int i=1;i<n+1;i++)
       {
           if(umap[i]==2)
           {
               ans[0]=i;
           }
           else if(umap[i]==0)
           {
               ans[1]=i;
           }
       }
       return ans;
       
    //    int count[100000]={0};
    //    int rep,mis;
    //    for(int i=0;i<n;i++)
    //    {
    //        count[arr[i]]++;
    //    }
    //    for(int i=1;i<100000;i++)
    //    {
    //        if(count[i]>1)
    //        {
    //            rep=i;
    //            break;
    //        }
    //    }
    //     for(int i=1;i<100000;i++)
    //    {
    //        if(count[i]==0)
    //        {
    //            mis=i;
    //            break;
    //        }
    //    }
    //    ans[0]=rep;
    //    ans[1]=mis;
       
     }
 };
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];  
        }
        Solution obj;
        auto ans = obj.findtwoelements(arr,n);
        cout<<ans[0]<<"  "<<ans[1]<<endl;

    }
    return 0;
}