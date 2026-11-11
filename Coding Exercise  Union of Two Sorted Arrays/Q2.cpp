// Squares of a Sorted Array.

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> getSortedSquares(vector<int>& arr) {
        
        /* 
        
        // Brute Force Approach.
        
        // T.C. :- O(N Log N).
        
        // S.C. :- O(N). stack space : O(log N)
        
        for(int i = 0; i < arr.size(); i++){
            
            arr[i] = arr[i] * arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        */
        
        // Optimal Approach.
        
        // T.C. :- O(2N) = O(N). 
        
        // S.C. :- O(N).
        
        int n = arr.size();
        
        vector<int> result(n);
        
        for(int i = 0; i < n; i++){
            
            arr[i] = arr[i] * arr[i];
        }
        
        int head = 0; 
        
        int tail = n - 1;
        
        for(int pos = n - 1; pos >= 0; pos--){
            
            if(arr[head] > arr[tail]){
                
                result[pos] = arr[head];
                
                head++;
            }
            
            else{
                
                result[pos] = arr[tail];
                
                tail--;
            }
        }
        
        
        return result;
    }
};