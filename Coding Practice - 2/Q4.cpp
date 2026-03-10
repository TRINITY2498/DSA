#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscLetterTriangle(int n) {
        
        for(int i = 1; i <= n; i++){
            
            for(int j = 1; j <= i; j++){
                
                char letter ='A' + i - 1;
                
                cout << letter << " ";
            }
            cout << endl;
        }
    }
};