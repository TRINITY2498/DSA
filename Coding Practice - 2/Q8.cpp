#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printButterflyPattern(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int l = 1; l <= i; l++){
                
                cout << "* ";
            }
            
            for(int s = 1; s <= 4 * (n - i); s++){
                
                cout << " ";
            }
            
            for(int r = 1; r <= i; r++){
                
                cout << "* ";
            }
            
            cout << endl;
            
        }
        
        for(int j = 1; j < n; j++){
            
            for(int p = 1; p <= n - j; p++){
                
                cout << "* ";
            }
            
            for(int q = 1; q <= 4 * j; q++){
                
                cout << " ";
            }
            
            for(int k = 1; k <= n - j; k++){
                
                cout << "* ";
            }
            
            cout << endl;
            
        }
        
    }
};