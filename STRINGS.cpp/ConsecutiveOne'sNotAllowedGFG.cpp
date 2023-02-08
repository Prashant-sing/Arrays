#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
    public:
    ll CountStrings(int n){
        int zeroend = 1;//"0" For string of length 1 having only 0
        int oneend = 1; //"1" For string of length 1 having only 1
        int sum = zeroend + oneend;
        if(n == 1) return sum;// means string either contains only "1" or "0"
        int i = 2;
        while (i <= n)
        {
            oneend = zeroend % (1000000007);//consecutive ones are not allowed that is why we can add one to only those strings which are ended by 0s
            zeroend = sum % (1000000007); // But we can add zero to both strings whether they are ended by 0 or 1 that is why added zeroend become sum
            sum = zeroend + oneend % (1000000007);
            i++;
        }
        return sum % (1000000007);
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        int ans = obj.CountStrings(n);
        cout<<ans<<endl;

    }
    return 0;
}