#include<bits/stdc++.h>
using namespace std;
bool checkTriplet(int arr[],int n){
    sort(arr,arr+n);
    int l = 0, m = l+1, r= m+1;
    for (int i = 0; i < n; i++)
    {
         arr[i] = arr[i]*arr[i];//storing square of array 
    }
    while(l <= n-3){
        int a = arr[l], b = arr[m], c = arr[r];
        if(a*a + b*b == c*c){
            return 1;
        }
        if(r != n-1) r++;
        if(r == n-1 && m != n-2){
            m++;
            r = m+1;
        }
        if((r == n-1) && (m == n-2)){
            l++;
            m = l+1;
            r = m+1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
         cin>>arr[i];
         int ans = checkTriplet(arr,n);
         if(ans) 
            cout<<"True "<<endl;
        else 
            cout<<"False";
    }
    return 0;
}