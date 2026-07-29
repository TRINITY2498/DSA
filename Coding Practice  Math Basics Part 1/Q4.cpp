#include <bits/stdc++.h>
using namespace std;

// Print Digits Of A Number In Reverse Order.

class solution {
public:
    void printDigit(int n) {
        
        while(n != 0){
            
            int last = n % 10;
            
            n = n / 10; 
            
            cout << last << endl;
        }
        
        
    }
};