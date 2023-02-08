#include <iostream>
using namespace std;
class solution
{
public:
    int max_Books(int arr[], int n, int k)
    {
        int sum = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                sum += arr[i];
                maxi = max(sum, maxi);
            }
            else
            {
                sum = 0;
            }
        }
        return maxi;
    }
};
int main()
{
    int t;
    cout << "Enter the no. of testcases " << endl;
    cin >> t;
    while (t--)
    {
        int arr[] = {3, 2, 2, 3, 1, 1, 1, 3};
        int n = sizeof(arr) / sizeof(arr[0]);
        int k;
        cout << "Enter the value of k " << endl;
        cin >> k;
        solution obj;
        cout << obj.max_Books(arr, n, k) << endl;
    }
    return 0;
}