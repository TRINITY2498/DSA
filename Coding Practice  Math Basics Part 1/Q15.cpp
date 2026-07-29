#include<bits/stdc++.h>
using namespace std;

// Automorphic Number.

class solution {
public:
    bool checkAutomorphicNumber(int num) {
        
        int square = num * num;
        
        bool is_automorphic = false;
        
        while(num > 0){
            
            if(square % 10 == num % 10){
                
                is_automorphic = true;
            }
            else{
                
                is_automorphic = false;
            }
            
            num = num / 10;
            square = square / 10;
        }
        
        if(is_automorphic == true){
            
            return true;
        }
        else{
            
            return false;
        }
        
    }

};