#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printLetterTriangle(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 1; j <= i; j++){
                
                char letter = 'A' + (j - 1);
                
                cout << letter << " ";
            }
            
            cout << endl;
        }
    }
};
