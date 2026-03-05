#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printCenteredStarTriangle(int n) {
        
        for(int i = 0; i < n; i++){
            int mid = n - 1;
            int start = mid - i;
            int end = mid + i;
            
            for(int j = 0; j <= ((2 * n) - 1); j++){
                
                if(j >= start and j <= end){
                    
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