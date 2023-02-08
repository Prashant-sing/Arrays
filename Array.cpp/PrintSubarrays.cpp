#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    { string s = " ";
        for (int j = i; j < n; j++)
        {
           for(int k = i; k <= j; k++)
           cout<<arr[k]<<" "; 

           cout<<endl;
        }
    }
   return 0; 
}