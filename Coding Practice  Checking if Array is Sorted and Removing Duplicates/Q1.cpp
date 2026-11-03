// Checking if Array is Sorted.

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isSorted(int arr[],int n){
        
        for(int i = 0; i <= n - 2; i++){
            
            if(arr[i] > arr[i + 1]){
                
                return false;
            }
        }
        
        return true;
        
    }
};