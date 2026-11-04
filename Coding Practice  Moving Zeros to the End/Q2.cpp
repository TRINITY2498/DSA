// Move Zeros to front of Array.

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        
        int i = n - 1;
        
        for(int j = n - 1; j >= 0; j--){
            
            if(arr[j] != 0){
                
                swap(arr[i], arr[j]);
                
                i--;
            }
        }
    }
};