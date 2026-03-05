#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printTrianglePattern(int n) {
        
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < i + 1; j++){
                
                cout << "* ";
            }
            
            cout << endl;
        }
        
        for (int p = 0; p < n - 1; p++){
            
            for(int q = 0; q < n - p - 1; q++){
                
                cout << "* ";
            }
            
            cout << endl;
        }
        
        
    }
};