#include <bits/stdc++.h>
using namespace std;

// Marble Game.

class solution{
    public:
    int minimumTransfers(int A, int B) {
       
       int T = A + B;
       
       vector<int> divisors;
       
       for(int i = 1; i * i <= T; i++){
           
           if(T % i == 0){
               
               divisors.push_back(i);
               
               if(i != T / i){
                   
                   divisors.push_back(T / i);
               }
           }
       }
       
       int min_dif = INT_MAX;
       
       for(auto d : divisors){
           
           if(d < T){
               
               int diff = abs(d - B);
               
               if(diff < min_dif){
                   
                   min_dif = diff;
               }
           }
       }
       
       return min_dif;
       
    }
};