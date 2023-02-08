#include <iostream>
using namespace std;
class solution
{
public:
    int maxWater(int arr[], int n)
    {
        int left[n];
        int right[n];
        int water = 0;
        left[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], arr[i]);
        }

        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], arr[i]);
        }

        for (int i = 1; i < n - 1; i++)
        {
            int var = min(left[i - 1], right[i + 1]);
            if (var > arr[i])
            {
                water += var - arr[i];
            }
        }
        return water;
    }
};
int main()
{
    int t;
    cout << "Enter the test cases " << endl;
    cin >> t;
    while (t--)
    {
        int arr[] = { 3,0,2,0,4};
        int n = sizeof(arr) / sizeof(arr[0]);
        solution obj;
        cout << obj.maxWater(arr, n) << endl;
    }
    return 0;
}