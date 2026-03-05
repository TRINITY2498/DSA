#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDoubleCenteredStarTriangle(int n) {
        
        for(int i = 0; i < n; i++){
            
            int mid = n - 1;
            int start = mid - i;
            int end = mid + i;
            
            for(int j = 0; j < (2 * n - 1);j++){
                
                if(j >= start and j <= end){
                    
                    cout << "*";
                }
                
                else{
                    
                    cout << " ";
                }
            }
            
            cout << endl;
        }
        
        
        for(int p = 0; p < n; p++){
            int mid = n - 1;
            int start = p;
            int end = (2 * n - 2) - p;
            
            for(int q = 0; q < (2 * n - 1); q++){
                
                if (q >= start and q <= end){
                    
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