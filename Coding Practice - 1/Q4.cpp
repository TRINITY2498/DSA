#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printRightAngledNumberTriangle(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 1; j <= i; j++){
                
                cout << i << " ";
            }
            
            cout << endl;
        }
        
        
    }
};