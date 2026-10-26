// Quick Sort Implementation.

// Time Complexity: in Best Case => N Log N || Worst Case => O(N ^ 2).

// Space Complexity: O(1). || Stack Space(Due to Recursion) => in best case: O(Log N). Worst Case: O(N).


#include<bits/stdc++.h>
using namespace std;

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



void quick_sort(int arr[], int low, int high){
    
    if(low < high){
        
        int pIndex = partition(arr, low, high);
        
        quick_sort(arr, low, pIndex - 1);
        
        quick_sort(arr, pIndex + 1, high);
    }
}

int main() {
  
  int n;
  
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  quick_sort(arr, 0, n - 1);
  
  for(int i = 0; i < n; i++){
      
      cout << arr[i] << " ";
  }
  
  return 0;
}