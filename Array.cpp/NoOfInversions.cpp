 #include<bits/stdc++.h>
 using namespace std;
 long long merge(int arr[], int l, int mid, int r){
     long long inv = 0;
     int n1 = mid-l+1;
     int n2 = r-mid;
     int a[n1];
     int b[n2];
     for (int i = 0; i < n1; i++)
     {
         a[i] = arr[l+i];
     }
     for (int i = 0; i < n2; i++)
     {
          b[i] = arr[mid+1+i];
     }
     int i = 0, j = 0, k = l;
     while(i<n1 && j<n2){
         if(a[i]<=b[j]){
           arr[k] = a[i];
           k++; i++;
         }
         else{
             arr[k] = b[j];
             inv += n1-i;//a[i],a[i+1],a[i+2],.....a[n1]>b[j]
             k++;
             j++;
             }
     }
     while(i<n1){
          
             arr[k] = a[i];
             k++; i++;
         
     }
     while(j<n2){
          
             arr[k] = b[j];
             k++; j++;
         
     }
     return inv;
 }
 long long inversioncount(int arr[], int l, int r){
     long long inv = 0;
     if(l<r){
         int mid = (l+r)/2;
         inv += inversioncount(arr,l,mid);
         inv += inversioncount(arr,mid+1,r);
         inv += merge(arr,l,mid,r);
     }
     return inv;
 }
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     cout<<inversioncount(arr,0,n-1);
     return 0;
 }
    // long long inversionCount(long long arr[],long long N){
    //     long long count = mergesort(arr,0,N-1);
    //     return count;
    // }

// int main(){
//     long long T;
//     cin>>T;
//     while(T--){
//         long long N;
//         cin>>N;
//         long long a[N];
//         for(long long i = 0; i < N; i++){
//             cin>>a[i];
//         }
//         Solution obj;
//         cout<<obj.inversionCount(a,N);
//     }
//     return 0;
// }