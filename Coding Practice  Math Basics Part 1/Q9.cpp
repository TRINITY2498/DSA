#include <bits/stdc++.h>
using namespace std;

// Finding The Kth Digit From The Right.

class solution {
public:
    int kthDigit(int A, int B, int k) {
        
        long long number = 1; 
        
        for(int i = 0; i < B; i++){
            
            number *= A;

        }
        
        for(int i = 1; i < k; i++){
            
            number = number / 10;
        }
    
    return number % 10;
        
    }
};