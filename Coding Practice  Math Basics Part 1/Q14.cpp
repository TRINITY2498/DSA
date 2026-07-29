#include<bits/stdc++.h>
using namespace std;

// Armstrong Number.

class solution {
public:
    bool checkArmstrongNumber(int num) {
        
        int k = to_string(num).size();
        
        int sum = 0;
        
        int n = num;
        
        while(num > 0){
            
            int digit = num % 10;
            num = num / 10;
            
            int prod = 1;
            
            for(int i = 0; i < k; i++){
                
                
                prod = prod * digit;
            }
            
            sum += prod;
        }
        
        if(n == sum){
            
            return true;
        }
        else{
            
            return false;
        }
        
        
        
        
    }

};