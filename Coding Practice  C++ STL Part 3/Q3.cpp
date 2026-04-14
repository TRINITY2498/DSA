#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<string,int>a, pair<string,int>b){
    if (a.second < b.second) return true;
    if (a.second > b.second) return false;
    return false;
}

class solution{
    public:
    void sortProducts(vector<pair<string, int>>& products) {
        
        sort(products.begin(), products.end(), comparator);
        
    }
    
    void displayProducts(const vector<pair<string, int>>& products) {
        
        for(auto x : products){
            
            cout << x.first << ":" << x.second << endl;
        }
        
    }
};