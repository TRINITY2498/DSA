#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printInvertedCenteredStarTriangle(int n) {
        
        for(int i = 0; i < n; i++){
            int mid = n - 1;
            int start = i;
            int end = (2 * n - 2) - i;
            
            for(int j = 0; j < (2 * n - i); j++){
                
                if (j >= start and j <= end){
                    
                    cout << "*";
                }
                
                else{
                    cout << " ";
                }
            }
            
            cout << endl;
        }
        
        
    }
};