#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void searchElement(int** arr, int n, int m, int k) {
        
        int row,col;
        bool found = false;
        
        for (int i = 0; i < n; i++){
            
            for (int j = 0; j < m; j++){
                
                if (arr[i][j] == k){
                    
                    row = i;
                    col = j;
                    
                    cout << row << " " << col;
                    
                    found = true;
                    
                    return;
                }
        
            }
        }
        
        if (found == false){
            
            row = -1;
            col = -1;
            
            cout << row << " " << col;
        }
        
        
    }
};