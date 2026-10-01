// Partial Sorting with K Swaps.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:    
    void rearrangeArray(vector<int>& arr, int k) {
        
        int n = arr.size();
        
            
            for(int i = 0; i < k; i++){
                
                int mini = i; 
                
                for(int j = i; j <= n - 1; j++){
                    
                    if(arr[j] < arr[mini]){
                        
                        mini = j;
                    }
                }
                
                int temp = arr[i];
                
                arr[i] = arr[mini];
                
                arr[mini] = temp;
                    
            }
        
        
        
        
    }
};