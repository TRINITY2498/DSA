// Generalized Fibonacci Sequence.

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
        
        for(int i = k; i < n; i++){
            
            int sum = 0;
            
            for(int j = i - k; j < i; j++){
                
                sum += start[j];
            }
            
            start.push_back(sum);
        }
        
        return start;
        
    }
};