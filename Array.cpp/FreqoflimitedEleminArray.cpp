#include<iostream>
using namespace std;
void frequencyCount(int arr[],int N){
   int count[N] = {0};
   for(int i = 0; i<N; i++){
             count[arr[i]]++;
         }
         for(int i = 0; i<N; i++){
              arr[i] = count[i+1];
         }
         for (int i = 1; i <= N; i++)
         {
            cout<<arr[i]<<" ";
         }
         
}
int main(){
    int arr[] = {2,2,3,3,5,5};
    int N = sizeof(arr)/sizeof(arr[0]);
    frequencyCount(arr,N);
    return 0;
}