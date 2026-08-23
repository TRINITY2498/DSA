// Printing N to 1.

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInDescendingOrder(int N) {
        
        if(N == 0){
            
            return;
        }
        
        cout << N << endl;
        
        print1toNInDescendingOrder(N - 1);
        
        
    }
};