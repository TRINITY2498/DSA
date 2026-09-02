// 

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n) {
        
        if(n == 1){
            
            return {1};
        }
        
        vector<long long> ans = factorialSequence(n - 1);
        
        long long next = ans.back() * n;
        
        ans.push_back(next);
        
        return ans;
    }
};