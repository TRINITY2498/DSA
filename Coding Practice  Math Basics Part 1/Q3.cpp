#include <bits/stdc++.h>
using namespace std;

// Reverse A Number.

class solution {
public:
    int reverseNumber(int N) {
        
        int x = 0;
        
        while(N != 0){
            
            int last = N % 10;
            
            x = x * 10 + last;
            
            N = N / 10;
        }
    
    return x;
        
        
    }
};