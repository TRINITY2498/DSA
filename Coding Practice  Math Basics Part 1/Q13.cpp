#include<bits/stdc++.h>
using namespace std;

// Check if it is Harshad Number or Not.

class solution {
public:
    bool checkHarshadNumber(int num) {
        
        int sum = 0;
        int n = num;
        
        while(num > 0){
            
            int digit = num % 10;
            
            sum += digit;
            
            num = num / 10;
        }
        
        if(n % sum == 0){
            
            return true;
        }
        else{
            
            return false;
        }
        
    }

};