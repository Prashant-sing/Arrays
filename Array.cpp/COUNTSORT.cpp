//Bloody Count sort
#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[], int n)
{   //Maximum element = size of count array
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    //count of each element
    int count[10] = {0};        //Initialisng count array with 0
    for (int i = 0; i < n; i++) //we chose here n instead of k because for calculating count
    {                           //we will have to traverse in that given array
        count[arr[i]]++;        //Storing count of each element in count array
    }

    for (int i = 1; i <= k; i++) //Here we chose k instead of n because now we are modifying
    {                           //that count array of size k
        count[i] += count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--)       //we start traversing from last of given array and that
    {                                     //value(x) will be the index(idx) of count array, now reduce that
        output[--count[arr[i]]] = arr[i]; //value(v) at idx by 1,now that v will be the
    }                                     //index(IDX) of that output array and finally replace the
                                         //value(V) present at IDX by X.
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    
}

int main()
{
    int n;
    cout << "Enter the size of Array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the values in Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<< "Sorted array is --"<<endl;
    countsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] <<"  ";
    }
    return 0;
}
 