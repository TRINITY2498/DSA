#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void addOrderToFront(deque<int>& orders, int orderId) {
        
        orders.push_front(orderId);
    }
    
    void addOrderToBack(deque<int>& orders, int orderId) {
    
    orders.push_back(orderId);
        
    }
    
    void removeOrderFromFront(deque<int>& orders) {
        
        if(!orders.empty()){
            orders.pop_front();
        }
        
    }
    
    void removeOrderFromBack(deque<int>& orders) {
        
        if(!orders.empty()){
            orders.pop_back();
        }
        
    }
    
    void displayOrders(deque<int>& orders) {
        
        for(auto x:orders){
            
            cout << x << endl;
        }
        
        
    }
};