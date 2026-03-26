#include<bits/stdc++.h>
using namespace std;

int main() {
  
  list<int> list_1;
  list_1.push_back(5);
  list_1.emplace_back(7);
  list_1.push_front(3);
  list_1.emplace_front(1);
  
 // cout << list_1[0];   This will give error.
  
  // Adding elements at the start or inserting anywhere is 
  // much cheaperin list compared to vector.
  
  list_1.pop_back();
  list_1.emplace_back();
  cout << list_1.back() << endl;
  cout << list_1.front() << endl;
   
  return 0;
}