#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscLetterPyramid(int n) {
        
        for(int i = 1; i <= n; i++){
            
            char start_letter = 'A' + (n - i);
            
            for(int j = n - i; j <= n - 1; j++){
                
                char letter = 'A' + j;
                
                cout << letter << " ";
                
            }
            
            cout << endl;
        }
        
        
    }
};