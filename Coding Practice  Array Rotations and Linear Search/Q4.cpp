#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& nums, int x, int y) {
        
        int n = nums.size();
        
        x = x % n;
        
        y = y % n;
        
        // Right Rotation.
        
        reverse(nums.begin(), nums.end());
        
        reverse(nums.begin(), nums.begin() + x);
        
        reverse(nums.begin() + x, nums.end());
        
        // Left Rotation.
        
        reverse(nums.begin(), nums.begin() + y);
        
        reverse(nums.begin() + y, nums.end());
        
        reverse(nums.begin(), nums.end());
    
    return nums;
    }
};