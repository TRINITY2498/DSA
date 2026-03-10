#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDescendingLetterTriangle(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 0; j <  n - i + 1; j++){
                
                char letter = 'A' + (j);
                
                cout << letter << " ";
            }
            
            cout << endl;
        }
        
        
    }
};