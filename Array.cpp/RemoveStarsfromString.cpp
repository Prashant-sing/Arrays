#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeStars(string s){
        //Using Stacks
        // string str;
        // for(auto& c : s){
        //     if(c == '*') str.pop_back();
        //     str.push_back(c);
        // }
        string str;
        int count = 0;
        int n = s.size();
        for(int i = n-1; i >= 0; i--){
            if(count == 0 && s[i] != '*') str += s[i];
            if(s[i] == '*') count++;
            else if(count > 0) count--;
        }
        reverse(str.begin(),str.end());
        return str;
    }  
};
int main(){
    string s = "leet**cod*e";
    Solution obj;
    cout<<obj.removeStars(s);
    return 0;
}