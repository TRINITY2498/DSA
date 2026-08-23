// Print 1 to N and Back with Condition.

#include <bits/stdc++.h>
using namespace std;

void helper(int i, int n){
    
    if(i > n){
        
        return;
    }
    
    if(i % 2 == 0){
        
        cout << i << " ";
    }
    
    helper(i + 1, n);
    
    if(i % 2 != 0){
        
        cout << i << " ";
    }
}

class solution{
    public:
    void printEvenOdd(int n) {
        
        helper(1, n);
        
        
       
        
        
        
    }
};