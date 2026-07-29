#include<bits/stdc++.h>
using namespace std;

// Second Largest Digit.

class solution {
public:
    int secondLargestDigit(int num) {
        
        int largest = -1;
        int second_largest = -1;
        
        while(num > 0){
            
            int digit = num % 10;
            
            if(digit > largest){
                
                second_largest = largest;
                largest = digit;
            }
            else if(digit < largest && digit > second_largest){
                
                second_largest = digit;
            }
            
            num = num / 10;
        }
        
        return second_largest;
        
    }

};