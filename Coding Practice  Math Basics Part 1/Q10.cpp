#include<bits/stdc++.h>
using namespace std;

// Product Of Digits.

class solution {
public:
    int ProductOfDigits(int num) {
        
        int product = 1;
        
        while(num != 0){
            
            int last = num % 10;
            
            product = product * last;
            
            num = num / 10;
            
        }
        
    return product;
    }

};