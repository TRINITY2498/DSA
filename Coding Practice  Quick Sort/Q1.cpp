#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    
    int partition(int arr[], int low, int high){
        
        int i = low; 
        
        int j = high;
            
        int pivot = arr[low];
        
        while(i < j){
            
            while(arr[i] <= pivot && i < high){
                
                i++;
            }
            
            while(arr[j] > pivot && j > low){
                
                j--;
            }
            
            if(i < j){
                
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[low], arr[j]);
        
        return j;
    }
    
    void qs(int arr[], int low, int high){
        
        if(low < high){
            
            int pIndex = partition(arr, low, high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
        
    }
    
    void quickSort(int arr[], int n){
         
         qs(arr, 0, n - 1);
         

         
    }
};