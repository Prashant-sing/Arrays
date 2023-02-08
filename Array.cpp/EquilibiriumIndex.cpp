#include<bits/stdc++.h>
using namespace std;
int findEquilibrium(int A[],int n){
    int mid = n / 2;
    int leftSum = 0, rightSum = 0;
 
    //calculation sum to left of mid
    for (int i = 0; i < mid; i++)
    {
        leftSum += A[i];
    }
    //calculating sum to right of mid
    for (int i = n - 1; i > mid; i--)
    {
        rightSum += A[i];
    }
 
    //if rightsum > leftsum
    if (rightSum > leftSum)
    {
        //we keep moving right until rightSum become equal or less than leftSum
        while (rightSum > leftSum && mid < n - 1)
        {
            rightSum -= A[mid + 1];
            leftSum += A[mid];
            mid++;
        }
    }
    else
    {
        //we keep moving right until leftSum become equal or less than RightSum
        while (leftSum > rightSum && mid > 0)
        {
            rightSum += A[mid];
            leftSum -= A[mid - 1];
            mid--;
        }
    }
 
    //check if both sum become equal
    if (rightSum == leftSum)
    {
        return mid;
    }
 
    return -1; 
}
int main(){
    int A[] = {1,3,4,2,6,2};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"The Equilibrium index of array is "<<findEquilibrium(A,n);
    return 0;
}