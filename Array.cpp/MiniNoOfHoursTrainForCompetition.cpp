#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minNumberOfHours(int ien, int iex, vector<int>& ener, vector<int>& exp) {
        int count = 0,diff = 0;
        for(int i = 0; i < ener.size(); i++){
        if(ien <= ener[i]){
            diff = ener[i] - ien + 1;
            ien += diff;
            count += diff;
        }
        if(iex <= exp[i]){
            diff = exp[i] - iex + 1;
            iex += diff;
            count += diff;
        }
            ien -= ener[i];
            iex += exp[i];
        }
        return count;
    }
};
int main(){
    int InitialEnergy = 5;
    int InitialExperience = 3;
    int n = 4, m = 4;
    vector<int>Energy(n);
    
    for(int i = 0; i < n; i++){
       cin>>Energy[i];
    }
    cout<<"BloodX";
    vector<int>Experience(m);
    for(int j = 0; j < m; j++){
       cin>>Experience[j];
    }
    Solution obj;
    cout<<obj.minNumberOfHours(InitialEnergy,InitialExperience,Energy,Experience);
    return 0;
}
// class Solution {
// public:
//     int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
//         int count = 0;
//         int cnt = 0;
//         int sum = 0;
//         for(int i = 0; i < energy.size(); i++){
//             sum += energy[i];
//         }
//         if(sum > initialEnergy)
//             int count = sum - initialEnergy + 1;

//         for(int j = 0; j < experience.size(); j++){
        
//             if(initialExperience + experience[j] > experience[j+1])
//                 cnt = 0;
            
//             cnt = experience[j+1] - (initialExperience + experience[j]) + 1;

//             initialEnergy -= energy[j];
//             initialExperience += experience[j];
//         }
//         return count+cnt;
//     }
// };