#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[],int l,int h, int key){
        if(l>=h)
        return -1;
        int mid = (l+h)/2;
        if(arr[mid] == key)
        return mid;
        if(arr[l]<= arr[mid]){
            if(arr[l]>= key && key <= arr[mid])
            return search(arr,l,mid-1,key);
            return search(arr,mid+1,h,key);
        }
        if(key>= arr[mid] && key <= arr[h])
        return search(arr,mid+1,h,key);
        return search(arr,l,mid-1,key);
    }
};
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cout<<"Enter the size of array "<<endl;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the value of key "<<endl;
        cin>>key;
        Solution obj;
        cout<<obj.search(arr,0,n-1,key)<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals){
//         vector<vector<int>> ans;
//         if(intervals.size() == 0)
//         return ans;
//         sort(intervals.begin(),intervals.end());
//         vector<int>tempIntervals = intervals[0];//Storing the first pair of
//                                    //interval vector in temp vector
//         for(auto it : intervals){
//            if(tempIntervals[1] >= it[0])
//            tempIntervals[1] = max(it[1],tempIntervals[1]);//right element 
//            // of pair must be the maximum either take it from left or right

//            else{
//                ans.push_back(tempIntervals);// If the pairs are not 
//                tempIntervals = it;//overlapping store them in a data str.
//                                   // and make next pair as temp
//            }
//         }  
//          ans.push_back(tempIntervals);
//          return ans;                                
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<vector<int>>Intervals(n);
//         for (int i = 0; i < n; i++)
//         {
//              int x,y;
//              cin>>x>>y;
//              Intervals[i].push_back(x);
//              Intervals[i].push_back(y);
//         }
//         Solution obj;
//         vector<vector<int>> ans = obj.merge(Intervals);
//         for(auto i : ans){
//             for(auto j : i){
//                 cout<< j <<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }