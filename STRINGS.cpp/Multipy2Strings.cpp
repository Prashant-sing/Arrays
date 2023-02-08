#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int sum = 1;
    for (int i = 0; i < str.size(); i++)
    {
        
        sum = sum * int(str[i]);
    }
    
    cout<<sum;
    return 0;
}