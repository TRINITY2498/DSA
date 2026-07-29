#include <bits/stdc++.h>
using namespace std;

// Checking For Prime Numbers.

class solution {
public:
    bool isPrime(int n) {
    
        int count = 0;
        
        for(int i = 1; i * i <= n; i++){
            
            if(n % i == 0){
                
                count++;
                
                if(i != n / i){
                    
                    count++;
                }
            }
            
        }
        
        if(count == 2){
            
            return true;
        }
        else{
            
            return false;
        }
        
    }
};