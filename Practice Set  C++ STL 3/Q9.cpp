#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long energyPairs(int n, vector<int> &energy) {
        
        unordered_map<long long, long long> freq;
        
        for(int i = 0; i < n; i++){
            
            long long abs_val = abs(energy[i]);
            
            freq[abs_val]++;
        }
        
        long long ans = 0;
        
        for(auto &p : freq){
            
            long long k = p.second;
            
            ans = k * (k - 1) / 2;
        }
        
        return ans;
    }
};