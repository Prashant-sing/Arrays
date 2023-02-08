#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     int longestvalidparantheses(string s){
         // int n = s.size();
        // int open = 0, close = 0, res = 0;
        // for(int i = 0; i < n; i++){
        // if(s[i] == '(')  open++;
        // else   close++;
        // if(open == close){
        //     int len = open + close;   //2*open or 2*close
        //     res  = max(res,len);
        // }
        //     else if(close > open)   
        //     open = close = 0;
        // }
        // open = close = 0;
        // for(int i = n-1; i >= 0; i--){
        //  if(s[i] == '(')  open++;
        // else   close++;
        // if(open == close){
        //     int len = open + close;   //2*open or 2*close
        //     res  = max(res,len);
        // }
        //     else if(close < open)   
        //     open = close = 0;
        // }
        // return res;
         stack<int>st;
         int res = INT_MIN;
         st.push(-1);
         for (int i = 0; i < s.size(); i++)
         {
              if(s[i] == '(') st.push(s[i]);
              else{
                  st.pop();
                  if(st.empty()) st.push(i);
                  else{
                      int len = i - st.top();
                      res = max(res,len);
                  }
              }
         }
        return res; 
     }
};
int main(){
    string str = "(()()((";
    Solution obj;
    cout << obj.longestvalidparantheses(str);
    return 0;
}