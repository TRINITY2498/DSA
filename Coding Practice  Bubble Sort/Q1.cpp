// Bubble Sort Implementation.

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bubbleSort(int arr[], int n){
        
        for(int i = n - 1; i >= 0; i--){
            
            bool is_sorted = true;
            
            for(int j = 0; j <= i - 1; j++){
                
                if(arr[j] > arr[j + 1]){
                    
                    int temp = arr[j + 1];
                    
                    arr[j + 1] = arr[j];
                    
                    arr[j] = temp;
                    
                    is_sorted = false;
                }
            }
            
            if(is_sorted){
                
                break;
            }
        }
        
    }
};