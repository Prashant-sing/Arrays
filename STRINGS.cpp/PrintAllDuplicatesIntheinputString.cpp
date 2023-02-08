#include<bits/stdc++.h>
using namespace std;
void printdup(string str){
    unordered_map<char,int>ump;
    for (int i = 0; i < str.size(); i++)
    {
         ump[str[i]]++;
    }
    for(auto i : ump){
        if(i.second > 1)
        cout<<i.first<<" ,count = "<<i.second<<endl;
    }
}
int main(){
    string str = "test string";
    printdup(str);
    return 0;
}