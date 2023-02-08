 #include<bits/stdc++.h>
 using namespace std;
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {   vector <int> v;
       for(int i=0;i<n;i++)
       {
           v.push_back(arr1[i]);
           
       }
       for(int i=0;i<m;i++)
       {
           v.push_back(arr2[i]);
           
       }
       sort(v.begin(),v.end());
  
       
      v.erase(unique(v.begin(),v.end()),v.end());
       return v;

    }
    int main(){
        
        int n,m;
        cin>>n>>m;
         
        int arr1[n] = {1,2,2,3,3,4,4,4};
        
        int arr2[m] = {3,3,3,4,4,5,5};
        
        vector<int> res = findUnion(arr1,arr2,n,m); 
        
        for(auto i : res){
           cout<<i<<"  ";
        }
        
       return 0;
    }