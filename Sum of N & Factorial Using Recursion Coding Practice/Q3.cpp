// Sum Of Squares 1 to N.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursiveSumOfSquares(int n) {
        
        if(n == 1){
            
            return 1;
        }
        
        return recursiveSumOfSquares(n - 1) + (n * n);
        
        
    }
};