#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, string> a, pair<int, string> b){
        
        if(a.first != b.first){
            
            return a.first > b.first;
        }
        else{
            
            return a.second < b.second;
        }
    }
    

class solution {
public:

    
    vector<string> chocolatePopularity(int n, vector<string>& chocolates) {
        
        map<string, int> freq;
        vector<pair<int, string>> list;
        vector<string> ans;
        
        for(int i = 0; i < n; i++){
            
            freq[chocolates[i]]++;
        }
        
        for(auto &p : freq){
            
            list.push_back({p.second, p.first});
        }
        
        sort(list.begin(), list.end(), comparator);
        
        for(auto &k : list){
            
            ans.push_back(k.second);
        }
        return ans;
    }
    
};