#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printHourglassPattern(int n) {
        
        for(int i = 1; i < n + 1; i++){
            
            for(int l = 1; l <= n - i + 1; l++){
                
                cout << "* ";
            }
            
            for(int s = 1; s <= 4 * (i - 1); s++){
                
                cout << " ";
            }
            
            for(int r = 1; r <= n - i + 1; r++){
                
                cout << "* ";
            }
            
            cout << endl;
            
        }
        
        for(int j = 1; j <= n; j++){
            
            for(int p = 1; p <= j; p++){
                
                cout << "* ";
            }
            
            for(int q = 1; q <= 4 * (n - j); q++){
                
                cout << " ";
            }
            
            for(int k = 1; k <= j; k++){
                
                cout << "* ";
            }
            
            cout << endl;
        }
        
        
    }
};