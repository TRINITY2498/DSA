// Count The inversions.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    long long merge(int arr[], int left, int mid, int right){
        
        int i = left;
        int j = mid + 1;
        int k = left;
        long long inv_count = 0;
        
        vector<int> temp_arr(right - left + 1);
        
        while(i <= mid && j <= right){
            
            if(arr[i] <= arr[j]){
                
                temp_arr[k - left] = arr[i];
                i++;
            }
            
            else{
                
                temp_arr[k - left] = arr[j];
                inv_count += (mid - i + 1);
                j++;
            }
            k++;
        }
        
        while(i <= mid){
            
            temp_arr[k - left] = arr[i];
            i++;
            k++;
            
        }
        
        while(j <= right){
            
            temp_arr[k - left] = arr[j];
            j++;
            k++;
        }
        
        for(i = left; i <= right; i++){
            
            arr[i] = temp_arr[i - left];
        }
        
        return inv_count;
    }
    
    long long mergeSort(int arr[], int left, int right){
        
        if(left >= right){
            
            return 0;
        }
        
        long long inv_count = 0;
        
        int mid = (left + right) / 2;
        
        inv_count += mergeSort(arr, left, mid);
        inv_count += mergeSort(arr, mid + 1, right);
        inv_count += merge(arr, left, mid, right);
        
        return inv_count;
    }
    
    long countInversions(int arr[], int n) {
        
        return mergeSort(arr, 0, n - 1);
        
        
    }
    
};