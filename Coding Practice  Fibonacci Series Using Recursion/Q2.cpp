// Sum of Prime Fibonacci Numbers.

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    
    bool isPrime(int n){
        
        if(n < 2){
            
            return false;
        }
        
        for(int i = 2; i * i <= n; i++){
            
            if(n % i == 0){
                
                return false;
            }
        }
        
        return true;
    }
    
    int sumOfPrimeFibonacci(int n) {
        
    
        int a = 0;
        int b = 1;
        int sum = 0;
        
        for(int i = 0; i <= n; i++){
            
            if(isPrime(a)){
                
                sum += a;
            }
            
            int c = a + b;
            
            a = b;
            
            b = c;
        }
        
        return sum;
    }
};