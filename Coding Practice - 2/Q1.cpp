#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscendingNumberTriangle(int n) {
        int digit = 1;
        for(int i = 1; i <= n; i ++){
            
            for(int j = 1; j <= i; j++){
                
                cout << digit << " ";
                digit = digit + 1;
            }
            
            cout << endl;
        }
        
        
    }
};