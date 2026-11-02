// Second Largest Element

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        
        int max = arr[0];
        
        int sec_max = -1;
        
        for(int i = 1; i < n; i++){
            
            if(arr[i] > max){
                
                sec_max = max;
                
                max = arr[i];
            }
            else if(arr[i] > sec_max && arr[i] < max){
                
                sec_max = arr[i];
            }
        }
        
        return sec_max;
        
        
    }
};