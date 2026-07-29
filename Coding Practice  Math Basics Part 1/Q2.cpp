#include <bits/stdc++.h>
using namespace std;

// Counting Digits That Evenly Divides A Number.

class solution {
public:
    int evenlyDivides(int N) {
        
        int num = N;
        int count = 0;
        
        while(N != 0){
            
            int last = N % 10;
            
            N = N / 10;
            
            if(num % last == 0){
                
                count++;
            }
        }
    
    return count;
        
    }
};