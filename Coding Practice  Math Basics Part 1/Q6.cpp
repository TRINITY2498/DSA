#include <bits/stdc++.h>
using namespace std;

// Printing Divisors of an integer in Ascending Order.

class solution {
public:
    vector<int> printDivisors(int n) {
        
        vector<int> divisors;
        
        for(int i = 1; i * i <= n; i++){
            
            if(n % i == 0){
                
                divisors.push_back(i);
                
                if(i != n / i){
                    
                    divisors.push_back(n / i);
                }
                
            }
        }
        
        sort(divisors.begin(), divisors.end());
        
        return divisors;
        
    }
};