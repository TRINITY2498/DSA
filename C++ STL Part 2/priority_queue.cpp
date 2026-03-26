#include<bits/stdc++.h>
using namespace std;

int main() {
  
  priority_queue<int> prq;
  
  prq.push(1);
  prq.push(5);
  prq.push(8);
  prq.push(3);
  prq.emplace(4);
  
  cout << prq.top() << endl;
  prq.pop();
  cout << prq.top() << endl;
  
  // Not a linear data structure. Underlying data structure 
  // is true.
  // other functions: size, swap, empty.
  
  // min heap or min priority queue.
  
  priority_queue<int, vector<int>, greater<int>> min_prq;
  min_prq.push(1);
  min_prq.push(5);
  min_prq.push(8);
  min_prq.push(3);
  min_prq.emplace(4);
  cout << min_prq.top() << endl;
  
  // Time Complexity push, pop log(N). top - O(1).
  
  return 0;
}