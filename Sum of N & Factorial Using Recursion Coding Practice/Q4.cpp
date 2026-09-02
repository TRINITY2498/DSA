// Double Factorial Of a Number.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int doubleFactorial(int n) {
        
        if(n == 0 || n == 1){
            
            return 1;
        }
        
        return doubleFactorial(n - 2) * n;
        
    }
};