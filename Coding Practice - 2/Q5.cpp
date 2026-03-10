#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printUppercaseLetterPyramid(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int s = 0; s < n - i; s++){
                
                cout << " ";
            }
            
            for(int j = 1; j <= i; j++){
                
                char letter = 'A' + j - 1;
                
                cout << letter;
            }
            
            for(int k = i - 1; k >= 1; k--){
                
                char letter = ('A' + k) - 1;
                
                cout << letter;
            }
            
            cout << endl;
        }
        
        
    }
};