#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printCombinedTriangle(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 1; j < i + 1; j++){
                
                cout << j << " ";
            }
            
            for(int s = 0; s < (n - i) * 4; s++){
                
                cout << " ";
            }
            
            for(int j = i; j >= 1; j--){
                
                cout << j << " ";
            }
            
            cout << endl;
        }
        
        
    }
};