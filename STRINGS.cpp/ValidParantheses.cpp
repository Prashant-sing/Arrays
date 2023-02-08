#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (s[i] == ')' && (st.empty() || st.top() != '('))
                return 0;
            else if (s[i] == ')')
                st.pop();
            else if (s[i] == ']' && (st.empty() || st.top() != '['))
                return 0;
            else if (s[i] == ']')
                st.pop();
            else if (s[i] == '}' && (st.empty() || st.top() != '{'))
                return 0;
            else if (s[i] == '}')
                st.pop();
        }
        return st.empty();
    }
};
int main()
{
    string str = "(){}[]";
    Solution obj;
    cout << obj.isValid(str);
    return 0;
}