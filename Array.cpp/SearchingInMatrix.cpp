#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int r,c;
     cin>>r>>c;
     int a[r][c];
     for(int i = 0; i < r; i++){
         for(int j = 0; j < c; j++){
             cin>>a[i][j];
         }
     }
     int key;
     cout<<"Enter the key element "<<endl;
     cin>>key;
     bool flag = false;
     for(int i = 0; i < r; i++){
         for(int j = 0; j < c; j++){
            if(a[i][j] == key) 
            flag = true;
         }
     }
     if(flag) 
     cout<<"Element is found "<<endl;
     else
     cout<<key<<" is not present in Matrix "<<endl;
     
     return 0;
 }