// Find Second Largest Element.

#include<bits/stdc++.h>
using namespace std;

// Time O(N). and Space O(1).

// Optimal Solution.

int find_sec_large(int arr[], int n){
    
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

/*

// Time O(2N) = O(N),  and Space O(1).

// Better Solution.

int find_sec_large(int arr[], int n){
    
    int max = arr[0];
    
    int sec_max = -1;
    
    for(int i = 1; i < n; i++){
        
        if(arr[i] >= max){
            
            max = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] > sec_max && arr[i] != max){
            
            sec_max = arr[i];
        }
    }
    
    return sec_max;
}

*/

int main() {
  
  int n; 
  
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  cout << find_sec_large(arr, n);
  
  return 0;
}