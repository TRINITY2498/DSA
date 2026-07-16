#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long specialGift(int n, vector<int>& local, int m, vector<int>& online, int target) {
        
        unordered_map<int, int> freq;
        
        int count = 0;
        
        for(int i = 0; i < m; i++){
            
            freq[online[i]]++;
        }
        
        for(int j = 0; j < n; j++){
            
           int needed = target - local[j];
           
           if(freq.count(needed)){
               
               count += freq[needed];
           }
        }
        
        return count;
    }
};