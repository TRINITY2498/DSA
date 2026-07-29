#include<bits/stdc++.h>
using namespace std;

// Perfect Number.

class solution {
public:
    bool checkPerfectNumber(int num) {
        
        int sum = 0;
        
        for(int i = 1; i * i <= num; i++){
            
            if(num % i == 0){
                
                sum += i;
                
                if(i != num / i && ((num / i) != num)){
                    
                    sum += (num / i);
                }
                
            }
            
        }
        
        if(num == sum){
            
            return true;
        }
        else{
            return false;
        }
        
    }

};