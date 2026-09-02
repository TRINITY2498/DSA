// Sum of Factorial of Digits. 

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    
    int factorial(int n){
        
        if(n == 0 || n == 1){
            
            return 1;
        }
        
        return factorial(n - 1) * n;
    }
    
    int sumOfFactorialsOfDigits(int n) {
        
        if(n == 0){
            
            return 0;
        }
        
        int digit = n % 10;
        n = n / 10;
        
        return factorial(digit) + sumOfFactorialsOfDigits(n);
        
    }
};