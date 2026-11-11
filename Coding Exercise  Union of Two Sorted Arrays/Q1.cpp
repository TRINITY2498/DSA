#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> unionOfTwoSortedArrays(vector<int> a, vector<int> b){
        
        int i = 0, j = 0; 
        
        vector<int> ans;
        
        while(i < a.size() && j < b.size()){
            
            if(a[i] <= b[j]){
                
                if(ans.empty() || ans.back() != a[i]){
                    
                    ans.push_back(a[i]);
                }
                
                i++;
            }
            
            else{
                
                if(ans.empty() || ans.back() != b[j]){
                    
                    ans.push_back(b[j]);
                }
                
                j++;
            }
        }
        
        while(j < b.size()){
            
            if(ans.empty() || ans.back() != b[j]){
                
                ans.push_back(b[j]);
            }
            
            j++;
        }
        
        while(i < a.size()){
            
            if(ans.empty() || ans.back() != a[i]){
                
                ans.push_back(a[i]);
            }
            
            i++;
        }
        
        
        return ans;
        
    }
};