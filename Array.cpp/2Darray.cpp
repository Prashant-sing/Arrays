// Merge K Sorted Arrays in 2D array
#include <bits/stdc++.h>
#define N 105;
using namespace std;
void printArray(vector<int> arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
class solution
{
public:
  vector<int> mergeKarrays(vector<vector<int>> arr, int K)
  {
    // Using vectors
    int i, j, p = 0;
    vector<int> v(K * K);
    for (int i = 0; i < K; i++)
    {
      for (int j = 0; j < K; j++)
      {
        v[p++] = arr[i][j];
      }
    }
    sort(v.begin(), v.end());
    return v;
  //   //Using Min Heap--> Ascending Order
  //   priority_queue<int,vector<int>,greater<int>> pq;
  //   for (int i = 0; i < K; i++)
  //   { for (int j = 0; j < K; j++)
  //   {
  //      pq.push(arr[i][j]);
  //   }
  // }
  //   vector<int>v;
  //   while(!pq.empty()){
  //    v.push_back(pq.top());
  //    pq.pop();
  //   }
  // //    for (int i = 0; i < K; i++)
  // //   { for (int j = 0; j < K; j++)
  // //   {
  // //      v.push_back(pq.top());
  // //      pq.pop();
  // //   }
  // // } 
  //   return v;
  //   //Using Max Heap ---> Descending Order
  //   priority_queue<int,vector<int>> pq;
  //   for (int i = 0; i < K; i++)
  //   { for (int j = 0; j < K; j++)
  //   {
  //      pq.push(arr[i][j]);
  //   }
  // }
  //  for (int i = 0; i < K; i++)
  //   { for (int j = 0; j < K; j++)
  //   {
  //      v.push_back(pq.top());
  //      pq.pop();
  //   }
  // }
  // reverse(v.begin(),v.end());
  // return v; 
  }
};
int32_t main()
{
  int t;
  cout << "Enter the testcases " << endl;
  cin >> t;
  while (t--)
  {
    int K;
    cout << "Enter the size of 2D Array " << endl;
    cin >> K;
    vector<vector<int>> arr(N, vector<int>(N, 0));
    for (int i = 0; i < K; i++)
    {
      for (int j = 0; j < K; j++)
      {
        cin >> arr[i][j];
      }
    }
    solution obj;
    vector<int> output = obj.mergeKarrays(arr, K);
    printArray(output, K * K);
    cout << endl;
  }
}