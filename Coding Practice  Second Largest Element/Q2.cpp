// Second Smallest Element.

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        
        
        int smallest = arr[0];
        
        int sec_small = -1;
        
        for(int i = 1; i < n; i++){
            
            if(arr[i] < smallest){
                
                sec_small = smallest;
                
                smallest = arr[i];
            }
            
            else if(arr[i] < sec_small && arr[i] > smallest){
                
                sec_small = arr[i];
            }
        }
        
        return sec_small;
        
    }
};