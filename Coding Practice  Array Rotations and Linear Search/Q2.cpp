#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void leftRotate(int arr[], int n, int k){
        
        /*
        
        k = k % n;
        
        int temp[k];
        
        for(int i = 0; i < k; i++){
            
            temp[i] = arr[i];
        }
        
        for(int i = k; i < n; i++){
            
            arr[i - k] = arr[i];
        }
        
        for(int i = n - k; i < n; i++){
            
            arr[i] = temp[i - (n - k)];
        }
        
        */
        
        k = k % n;
        
        reverse(arr, arr + k);
        
        reverse(arr + k, arr + n);
        
        reverse(arr, arr + n);
        
    }
};