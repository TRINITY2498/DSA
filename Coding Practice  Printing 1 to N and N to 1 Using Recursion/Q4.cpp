// Recursive Power Calculation.

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    double recursivePower(double a, int b) {
        
        if(b == 1){
            
            return a;
        }
        
        return a * recursivePower(a, b - 1);
    }
};