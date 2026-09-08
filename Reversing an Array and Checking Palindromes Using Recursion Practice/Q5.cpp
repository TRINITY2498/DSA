// Recursive mirror Image Array.

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    
    bool helper(int left, int right, vector<int>& arr){
        
        if(left >= right){
            
            return true;
        }
        
        if(arr[left] != arr[right]){
            
            return false;
        }
        
        return helper(left + 1, right - 1, arr);
    }
    
    bool isMirrorImage(vector<int>& arr, int n){
        
        return helper(0, n - 1, arr);
        
    }
};