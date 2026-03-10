#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAsteriskSquare(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 1; j <= n; j++){
                
                if(i == 1 or i == n){
                    
                    cout << "* ";
                }
                
                else if(j == 1 or j == n){
                    
                    cout << "* ";
                }
                
                else{
                    
                    cout << "  ";
                }
            }
            
            cout << endl;
            
        }
    }
};
