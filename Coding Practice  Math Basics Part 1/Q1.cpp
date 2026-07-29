#include<bits/stdc++.h>
using namespace std;

// Count The Number Of Digits.

class solution {
public:
    int countDigits(int n){
        
        int count = 0;
        
        while(n != 0){
            
            count++;
            
            n = n / 10;
        }
    
    return count;
        
        
    }
};