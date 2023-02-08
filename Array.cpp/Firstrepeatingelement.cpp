#include<bits/stdc++.h>
using namespace std;
int firstrepeated(int arr[], int n1){
   unordered_map<int,int>ump;
   for (int i = 0; i < n1; i++)
   {
       ump[arr[i]]++;
   }
   for (int i = 0; i < n1; i++)
   {
       if(ump[arr[i]]>1){
           return i+1;
       }
       return -1;
   }
   
}
int32_t main(){
    int n1;
    cout<<"size of array "<<endl;
    cin>>n1;
    cout<<"Enter the values in array "<<endl;
    int arr[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr[i];
    }

    cout<<"Value of first repeating element with lower most index is -- "<<firstrepeated(arr,n1); 
}
// INTEGER TO WORDS
//  string ones[20] = {" ","one","two","three","four","five","six","seven","eight","nine",
//         "ten","eleven","tweleve","Thirteen","fourteen","fifteen","sixteen","seventeen","eighteen",
//         "nineteen"};
//     string tens[10] = {" "," ","twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty",
//         "Ninety"};
//     string numtowords(int n,string suffix){
//         string str =" ";
//         if(n>19){
//             str += tens[n/10] + ones[n%10];
//         }
//         else{
//            str += ones[n];
//         }
        
//         if(n)
//         str += suffix;
        
//         return str;
//     }
//     string convertToWords(long n) {
//        string res;
//        res += numtowords((n/10000000),"crores");
//        res += numtowords((n/100000)%100,"lakhs");
//        res += numtowords((n/1000)%100,"thousands");
//        res += numtowords((n/100)%10,"hundread");
    
//     if(n>100 && n%100){
//         res += "and";
//     }
//     res += numtoword((n%100),"");
    
//     return res;
//     }