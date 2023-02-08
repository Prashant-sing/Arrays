#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int nextGap(int gap){
        if(gap<=1)
        return 0;

        return (gap/2 + gap%2);//Ceiling Function
    }
    public:
    void merge(int arr1[],int arr2[],int n,int m){
        int gap = n+m;
        int i = 0,j = 0;
        for( gap = nextGap(gap); gap > 0; gap = nextGap(gap)){
            //For left Array
            for(i = 0; i+gap<n; i++){
                if(arr1[i]>arr1[i+gap])
                arr1[i] += arr1[i+gap] - (arr1[i+gap] = arr1[i]);
            }

            //ForRightArray
            for ( j = gap>n? (gap-n):0; j<m && i<n; j++,i++)
            {
                 if(arr1[i]>arr2[j])
                 arr1[i] += arr2[j] - (arr2[j] = arr1[i]);
            }
            
            if(j<m){
                for ( j = 0; j + gap< m; j++)
                {
                    if(arr2[j]>arr2[j+gap])
                    arr2[j] += arr2[j+gap] - (arr2[j+gap] = arr2[j]);
                }
                
            }
        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cout<<"Enter the size of First Array "<<endl;
        cin>>n;
        cout<<"Enter the size of Second Array "<<endl;
        cin>>m;
        int arr1[n];
        int arr2[m];
        cout<<"Enter first Array Elements "<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        cout<<"Enter Second Array Elements "<<endl;
        for (int j = 0; j < m; j++)
        {
           cin>>arr2[j];
        }
        
        Solution obj;
        obj.merge(arr1,arr2,n,m);
        for (int i = 0; i < n; i++)
        {
            cout<<arr1[i]<<" ";
        }
        
        for (int j = 0; j < m; j++)
        {
           cout<<arr2[j]<<" ";
        } 
    }
    return 0;
}