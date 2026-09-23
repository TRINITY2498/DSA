// Fibonacci Array Transformation.

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    
    int fib(int k){
        
        if(k == 0){
            
            return 0;
        }
        
        if(k == 1){
            
            return 1;
        }
        
        return fib(k - 1) + fib(k - 2);
    }
    
    vector<int> getTransformedArray(vector<int>& arr, int n) {
    
        for(int i = 0; i < n; i++){
            
            int k = arr[i];
            
            int fib_num = fib(k);
            
            arr[i] = fib_num;
        }
        
        return arr;
    }
};