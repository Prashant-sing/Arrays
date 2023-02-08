#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<char> CharConversion(string s){
        int len = s.size();
        vector<char> v;
        for(int i = 0; i < len; i++){
           if(s[i] >= 'A' || s[i] <= 'Z')
           v.push_back(s[i]+32);

        //    v.push_back(s[i]);
        //    if(s[i] >= 'a' || s[i] <= 'z')
        //    v.push_back(s[i]-32);
        }
        return v;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cout<<"Enter the string "<<endl;
        cin>> s;
        Solution obj;
        vector<char> ans;
        ans = obj.CharConversion(s);
        for(auto x : ans){
            cout<<x<<" ";
        }
        //typeid(x).name()
    }
    return 0;
}