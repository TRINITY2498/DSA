#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<pair<string, pair<int, double>>> orders;
    
    void addOrder(string itemName, int quantity, double price) {
        
        orders.push_back({itemName,{quantity,price}});
        
    }
    
    void updateOrder(string itemName, int newQuantity, double newPrice) {
        
        for(int i = 0; i < orders.size(); i++){
            
            if (orders[i].first == itemName){
                
                orders[i].second.first = newQuantity;
                orders[i].second.second = newPrice;
            }
        }
        
    }
    
    double calculateTotalRevenue() {
        
        double total = 0;
        
        for(int j = 0; j < orders.size(); j++){
            
            total += orders[j].second.first * orders[j].second.second;
            
            return total;
            
        }
        
    }
};