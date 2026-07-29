#include<bits/stdc++.h>
using namespace std;

// Sum Of Digits until Single Digit.

class solution {
public:
    int sumOfDigits(int num) {
        
        while(num >= 10){
            
            int sum = 0; 
            
            while(num > 0){
                int digit = num % 10;
            
                sum += digit;
            
                num = num / 10;
            }
            
            num = sum;
            
        }
        
        
        return num;
    }
    

};