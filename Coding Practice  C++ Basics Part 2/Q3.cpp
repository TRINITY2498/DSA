#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void table(int n){
        int prod;
        
        for (int i = 1; i <= 10; i++){
            
            prod = n * i;
            
            cout << n << " x " <<  i << " = " << prod << endl;
        }
        
        
    }
};