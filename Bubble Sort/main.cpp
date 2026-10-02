#include<bits/stdc++.h>
using namespace std;

// Time O(N^2).

/* 

void bubblesort(int arr[], int n){
    
    for(int i = n - 1; i >= 0; i--){
        
        for(int j = 0; j <= i - 1; j++){
            
            if(arr[j] > arr[j + 1]){
                
                int temp = arr[j];
                
                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
            }
        }
    }
}

*/

// Time : O(N).

void bubblesort(int arr[], int n){
    
    for(int i = n - 1; i >= 0; i--){
        
        bool swapped = true;
        
        for(int j = 0; j <= i - 1; j++){
            
            if(arr[j] > arr[j + 1]){
                
                int temp = arr[j];
                
                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
                
                swapped = false;
            }
        }
        
        if(swapped == true){
            
            break;
        }
    }
}

int main() {
  
  int n;
  
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  bubblesort(arr, n);
  
  for(int i = 0; i < n; i++){
      
      cout << arr[i] << " ";
  }
  
  return 0;
}