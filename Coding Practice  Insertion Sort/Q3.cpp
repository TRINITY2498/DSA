// Count Total Swaps.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSwaps(int arr[], int n){
        
        int count = 0;
        
        for(int i = 1; i <= n - 1; i++){
            
            int j = i;
            
            while(j > 0 && arr[j - 1] > arr[j]){
                
                int temp = arr[j - 1];
                
                arr[j - 1] = arr[j];
                
                arr[j] = temp;
                
                j--;
                
                count += 1;
            }
        }
        
        return count;
        
    }
};