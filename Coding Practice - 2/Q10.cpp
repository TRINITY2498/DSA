#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printConcentricSquarePattern(int n) {
        
        for(int i = 1; i <= 2 * n - 1; i++){
            
            for(int j = 1; j <= 2 * n - 1; j++){
                
            int top = i - 1;
            int left = j - 1;
            int bottom = (2 * n - 1) - i;
            int right = (2 * n - 1) - j;
            
            int d = min(min(top,bottom),min(left,right));
            
            cout << n - d << " ";
            }
            
            cout << endl;
            
        }
        
        
    }
};