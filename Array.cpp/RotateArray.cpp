#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cin >> d;
   
              int smallArr[d], c=0;

      for(int i=0; i<d; i++)
          smallArr[i] = arr[i];

      for(int i=d; i<n; i++)
          arr[c++] = arr[i];

      c=0;

      for(int i=n-d; i<n; i++)
          arr[i] = smallArr[c++];
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}
 //First reversing d elements from starting index.
   // reverse(arr, arr + d);
    //Then reversing the last n-d elements.
   // reverse(arr + d, arr + n);
    //Finally, reversing the whole array.
    //reverse(arr, arr + n);