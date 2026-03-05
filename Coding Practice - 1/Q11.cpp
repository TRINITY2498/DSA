#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAlternatingBinaryTriangle(int n) {
        
        for(int i = 0; i < n; i++){
            
            int val;
            
             if(i % 2 == 0){
                    val = 1;
                }
                
                else{
                    val = 0;
                }
                
            for(int j = 0; j < i + 1; j++){
               
               cout << val << " ";
               val = 1 - val;
                
            }
            
            cout << endl;
        }
        
        
    }
};