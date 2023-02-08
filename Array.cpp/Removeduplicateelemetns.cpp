#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values in array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k = a[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k,a[i]);
    }
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i<= k; i++)
    {
        if(count[i]>=1)
          cout<<i<<"  ";
    }
    return 0;
}
 