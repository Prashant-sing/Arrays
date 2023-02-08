#include<bits/stdc++.h>
using namespace std;
int countsort(int arr[],int n){
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
         k = max(k,arr[i]);
    }
    
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
         count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++) //Here we chose k instead of n because now we are modifying
    {                           //that count array of size k
        count[i] += count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--)       //we start traversing from last of given array and that
    {                                     //value(x) will be the index(idx) of count array, now reduce that
        output[--count[arr[i]]] = arr[i]; //value(v) at idx by 1,now that v will be the
    }                                     //index(IDX) of that output array and finally replace the
                                         //value(V) present at IDX by X.
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <  n; i++)
    {
         cin>>a[i];
    }
    countsort(a,n); 
    cout<<a[0]<<"  "<<a[n-1];
    return 0;
}