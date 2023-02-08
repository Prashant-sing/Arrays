#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j){
    int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}
int dnfsort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<= high){
        if(arr[mid] == 0){
          swap(arr,mid,low);
          mid++;
          low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }   
}
int main(){
    int n;
    cout<<"Enter the size of Array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of Array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    dnfsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}