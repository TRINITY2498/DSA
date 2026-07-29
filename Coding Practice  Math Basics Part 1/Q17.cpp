#include<bits/stdc++.h>
using namespace std;

// Sum Of Divisors.

class solution {
public:
    int sumOfDivisors(int num) {
        
        int sum = 0;
        int n = num;
        
        
            
            for(int i = 1; i * i <= n; i++){
                
                if(n % i == 0){
                    
                    sum += i;
                    
                    if(i != n / i){
                        
                        sum += (n / i);
                    }
                }
            }
    
        
        return sum;
        
    }

};