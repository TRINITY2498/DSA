// Selection Sort in Decreasing Order.

#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void selectionSort(int arr[], int n){
        
        for(int i = 0; i <= n - 2; i++){
            
            int max = i;
            
            for(int j = i; j <= n - 1; j++){
                
                if(arr[j] > arr[max]){
                    
                    max = j;
                }
            }
            
            int temp = arr[i];
            
            arr[i] = arr[max];
            
            arr[max] = temp;
        }
        
    }
};