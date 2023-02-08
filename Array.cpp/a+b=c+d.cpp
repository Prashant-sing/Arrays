// Given an array A[ ] of N of  integers, find the index of values that satisfy A + B = C + D where A,B,C & D are integers values in the array.
// Note: As there may be multiple pairs satisfying the equation return lexicographically smallest order of  A, B, C and D and return all as -1 if there are no pairs satisfying the equation.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> satisfyingEqn(int arr[], int n){
    //  index    pair(a,b)    whose sum will be equal to the other pair
    map<int,pair<int,int>> mp;
    vector<int>Ans;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            // If sum of current pair is not in hash, 
            // then store it and continue to next pair 
            int sum = arr[i] + arr[j];
            if(mp.find(sum) == mp.end()){
                mp[sum] = make_pair(i, j);
                continue;
            }
            //else means there is alredy a pair present in the map
            else{ 
                  pair<int,int>pp = mp[sum]; //pp --> previous pair
                  //3 4 4 3
                  //for removing Duplicacy 
        //  3 4 4........                        3 4 4 3..........
    if(pp.first != i && pp.second != j && pp.first != j && pp.second != i){
                     vector<int> ans(4);
                     ans[0] = pp.first;
                     ans[1] = pp.second;
                     ans[2] = i;
                     ans[3] = j;

                     if(Ans.size() == 0) Ans = ans;

    // Checking whether the pairs are lexicographically smallest or not
                     else{
                        bool shouldReplace = false;
                        for (int i = 0; i < Ans.size(); i++)
                        {
                            if(Ans[i] < ans[i]) break;
                            if(Ans[i] > ans[i]){
                                shouldReplace = true;
                                break;
                            }
                        }
    //We replace the pairs if find the pairs lexicographically small
                        if(shouldReplace) Ans = ans;
                     }
                  }
            }
        }
    } 
    if(Ans.size() == 0){
        vector<int> a(4,-1);
        return a;
    }
    return Ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[] = {3, 4, 7, 1, 2, 9, 8};
        vector<int> res;
        Solution obj;
        res = obj.satisfyingEqn(arr, 7);
        cout<<res[0]<<"  "<<res[1]<<"  "<<res[2]<<"  "<<res[3]<<endl;
    }
    return 0;
}