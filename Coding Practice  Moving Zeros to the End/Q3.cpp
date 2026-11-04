// Remove Specific Element.

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeSpecificElement(vector<int>& arr, int target) {
        
        int i = 0;
        for(int j = 0; j < arr.size(); j++){
            
            if(arr[j] != target){
                
                swap(arr[i], arr[j]);
                
                i++;
            }
        }
        
        return i;
    }
};