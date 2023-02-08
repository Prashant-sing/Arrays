#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long int cntsubrrwithequalzeroand1(int arr[],int n){
        long long sum = 0;
        long long cnt = 0;
        unordered_map<int,int>ump;
        ump.insert({0,1});
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1)
            sum++;
            else
            sum--;
            auto it = ump.find(sum);
            if(it != ump.end()) 
            cnt += it->second;

            ump[sum]++;
        }
        return cnt;
    }
};
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        Solution obj;
        cout<<obj.cntsubrrwithequalzeroand1(arr,n)<<endl;
    }
    return 0;
}