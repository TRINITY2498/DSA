// Reverse of an Array.

#include <bits/stdc++.h>
using namespace std;

void helper(int i, int arr[], int N){
    
    if(i >= N / 2){
        
        return;
    }
    
    swap(arr[i], arr[N - i - 1]);
    
    helper(i + 1, arr, N);
}

class solution{
public:
    void reverse(int arr[], int N){
        
       helper(0, arr, N); 
        
    }
};