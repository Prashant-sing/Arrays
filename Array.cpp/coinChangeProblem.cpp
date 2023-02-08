#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     long long int dp[10000][10000];
    long long int solve(int arr[],int m,int n){
        if(m == -1 && n>0)//index of arr has reached upto -1 and the sequence is still >0 ,it means
        return 0;         // sequence is not valid
        
        if(n==0)//In the middle of traversal of array from last if the sequence is 0 it means 
        return 1;//sequence is valid
        
        if(n<0)//In the middle of traversal of array from last if the sequence is <0 it means
        return 0;// sequence is not valid
        
        if(dp[m][n] != -1)//It means Memoizaation occurs any state is repeating
        return dp[m][n];
        
        return dp[m][n] = solve(arr,m,n-arr[m]) + solve(arr,m-1,n);//Either tha value of n or m will
        //Decrease
    }
    long long int count(int a[],int m,int n){
        int dp[m][n+1];//m is the size of array and
                       //n is the given value 
         for (int i = 0; i < m; i++)
         {
             for (int j = 0; j <= n; j++)
             {
                  dp[i][j] = -1;//storing -1 in dp
             }
              
         }
        return solve(a,m-1,n);               
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cout<<"Enter the size of array "<<endl;
        cin>>m;
        int n;
        cout<<"Enter the value "<<endl;
        cin>>n;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        
        Solution obj;
        cout<<obj.count(arr,m,n)<<endl;
    }
    return 0;
}