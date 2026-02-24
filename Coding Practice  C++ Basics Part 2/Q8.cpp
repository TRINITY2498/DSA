#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sumOfDiagonals(int matrix[][1000], int n) {
        int prim_diag = 0;
        int sec_diag = 0;
        
        for (int i = 0; i < n; i++){
                
            prim_diag = prim_diag + matrix[i][i];
            sec_diag = sec_diag + matrix[i][n - i - 1];
            
        }
        
       
        cout << prim_diag << " " << sec_diag;
    }
};