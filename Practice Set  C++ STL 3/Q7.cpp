#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> uniqueOrder(int n, vector<int> &arr) {
        
        vector<int> result;
        
        map<int,int> freq;
        
        for(int i = 0; i < arr.size(); i++){
            
            freq[arr[i]]++;
        }
        
        for(int j = 0; j < arr.size(); j++){
            
            if(freq[arr[j]] == 1){
                
                result.push_back(arr[j]);
            }
        }
        
        
        return result;
        
    }
};