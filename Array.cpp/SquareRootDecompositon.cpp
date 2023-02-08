#include<bits/stdc++.h>
using namespace std;
//#define int long long;
const int N = 1e5+2, MOD = 1e9+7;
int main(){
    int n;
    cout<<"Enter the size of Array "<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements in Array "<<endl;
    for (int i = 0; i < n; i++)
    {
         cin>>a[i];
    }
    int len = sqrtl(n);
    vector<int> b(len);//To store the sum of blocks
    for (int i = 0; i < n; i++)
    {
         b[i/len] += a[i];//computing the sum of each element of block
    }
    int q;//No. of Queries
    cout<<"Enter No. of Queries "<<endl;
    cin>>q;
    while(q--){
        int l,r;
        cout<<"Enter the value of l and r "<<endl;
        cin>>l>>r;
        l--;r--;//for 0 based indexing
        int sum = 0;
        for (int i = l; i <= r;)
        {
             if(i%len == 0 && i+len-1 <= r){//it means that block is complete not partial
                sum += b[i/len];
                i += len;
             }
             else{
                 sum += a[i];
                 i++;
             }
        }
        cout<<sum<<endl;
    }
    return 0;
}