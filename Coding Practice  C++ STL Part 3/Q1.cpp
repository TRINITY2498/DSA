#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int> a, pair<int,int> b) {
    
    if(a.first < b.first) return true;
    if (a.first > b.first) return false;
    if (a.second > b.second) return true;
    return false;
}

class solution {
public:
    void sortPairs(vector<pair<int, int>>& arr) {
        sort(arr.begin(), arr.end(), comparator);
    }

    int popcount(long long x) {
        
        return __builtin_popcountll(x);
        
    }
};