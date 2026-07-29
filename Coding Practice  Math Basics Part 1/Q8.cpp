#include <bits/stdc++.h>
using namespace std;

// Sum Of All Digits Between Numbers.

class solution {
public:
    int calculateDigitSum(int N1, int N2) {
        
        int sum_of_digits = 0;
        
        for(int i = N1; i <= N2; i++){
            
            int num = i;
            
            while(num != 0){
                
                int last = num % 10;
                
                sum_of_digits += last;
                
                num = num / 10;
                
            }
        }
        
        return sum_of_digits;
        
        
    }
};