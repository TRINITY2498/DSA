#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double calculateAverage(int arr[], int n) {
        int sum_of_arr = 0;
        
        for (int i = 0; i < n; i++){
            
            sum_of_arr = sum_of_arr + arr[i];
        }
        
        
        return (double)sum_of_arr / n;
        
    }
};