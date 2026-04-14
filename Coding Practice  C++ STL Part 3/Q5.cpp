#include <bits/stdc++.h>
using namespace std;

class solution {
public:
     string hasThreeSumEndingWithThree(vector<int>& arr) {
        
        vector<int> a;
        
        for(int i = 0; i < arr.size(); i++){
            
            a.push_back(arr[i] % 10);
        }
        
        for(int p = 0; p < a.size(); p++){
            
            for(int q = p + 1; q < a.size(); q++){
                
                for(int r = q + 1; r < a.size(); r++){
                    
                    if((a[p] + a[q] + a[r]) % 10 == 3)
                    
                    return "YES";
        }
            
        }
            
        }
        
        return "NO";
        
    }
};
