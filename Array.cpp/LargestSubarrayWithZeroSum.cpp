#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
   int maxLength(vector<int>& arr,int n){
       unordered_map<int,vector<int>>mp;
       int sum = 0;
       vector<int> v;
       v.push_back(sum);
       for(int i = 0; i<n; i++){
           sum += arr[i];
           v.push_back(sum);
       }
       for (int i = 0; i < v.size(); i++)
       {
           mp[v[i]].push_back(i);
       }
       int ans = INT_MIN;
       for (auto it : mp)
       {   
           vector<int>v1 = it.second;
           int x = *max(v.begin(),v.end());
           int y = *min(v.begin(),v.end());
           ans = max(ans,abs(x-y));
       }
       return ans;
       
   }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution obj;
        cout<<obj.maxLength(arr,n)<<endl;
    }
    return 0;
}
  