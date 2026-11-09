// Left Rotate Array by K places.

#include<bits/stdc++.h>
using namespace std;

/*

// Brute Force Approach.

// Time : O(N + K), Space : O(K).

void left_rotate(int arr[], int n, int k){
    
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
    
}

*/

// Optimal Approach.

// Time : O(2N) = O(N). Space : O(1).

void left_rotate(int arr[], int n, int k){
    
    reverse(arr, arr + k);
    
    reverse(arr + k, arr + n);
    
    reverse(arr, arr + n);
}

int main() {
  
  int n, k;
  
  cin >> n >> k;
  
  k = k % n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  left_rotate(arr, n, k);
  
  for(int i = 0; i < n; i++){
      
      cout << arr[i] << " ";
  }
  
  return 0;
}