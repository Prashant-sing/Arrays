#include<bits/stdc++.h>
using namespace std;
vector<int> leaderelement(int a[], int n){
   vector<int> v = {a[n-1]};
           int max = v[0];
           for(int i = n-2; i>= 0; i--){
               if(a[i]>= max){
                   max = a[i];
                   v.push_back(a[i]);
               }
           }
    reverse(v.begin(),v.end());
      
     return (v);
}
int32_t main(){
    int n;
    cin>>n;
    int a[n] = {18,12,7,5,11,2,8,6,4,14};
    vector<int> res = leaderelement(a,n);
    for(auto i : res){
        cout<<i<<" ";
    }
}