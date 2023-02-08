#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x) 
int32_t main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i, 0, n){
        cin>>a[i];
    }
    map<int,int>freq;
    rep(i,0,n){
      int presentsize = freq.size();
      if(freq[a[i]] == 0 and presentsize == k)
          break;

      freq[a[i]]++;      
    }
    vii ans;
    map<int,int> :: iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        if(it->ss != 0){
            pii p;
            p.ff = it->ss;
            p.ss = it->ff;
            ans.push_back(p);
        }
    }
    sort(ans.begin(),ans.end(),greater<pii>());
    vii :: iterator it1;
    cout<<"Element "<<"  "<<"Frequency"<<endl;
    for (it1 = ans.begin(); it1!= ans.end(); it1++)
    {
       cout<<it1->ss <<"      "<<"-->"<<it1->ff <<endl;
    }
    
}
 /*General Code for top k frequent elements in an array
 #include<bits/stdc++.h>
using namespace std;
vector<int> topK(vector<int>& nums, int k) {
    unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        
    
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
       
        vector<int>v;
        int count=0;
        for(auto it:m)
        {  
            minh.push({it.second,it.first});
            if(minh.size()>k)
            minh.pop();
        }
        while(minh.size()>0)
         {
            pair<int,int>p=minh.top();
            v.push_back(p.second);
            minh.pop();
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for (auto i : v) {
        v.push_back(i);
    }
    topK(&v,k);
    vector<int> :: iterator it;
    for (it = v.begin();it != v.end(); it++) {
        cout<<it->first<<"  "<<it->second<<endl;
    }
} */   
