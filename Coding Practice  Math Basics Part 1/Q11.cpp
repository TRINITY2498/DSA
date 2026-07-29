#include<bits/stdc++.h>
using namespace std;

// Check Even Digits.

class solution {
public:
    bool checkEvenDigits(int num) {
        
        bool is_even = true;
        
        while(num != 0){
            
            int last = num % 10;
            num = num / 10;
            
            if(last % 2 == 0){
                
                is_even = true;
                
            }
            
            else{
                
                is_even = false;
                
                break;
            }
        }
       
       if(is_even == true){
           
           return true;
       }
       else{
           
           return false;
       }
        
    }

};