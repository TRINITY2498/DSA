#include<bits/stdc++.h>
using namespace std;

int main() {
  
  queue<int> q;
  // FIFO
  
  q.push(1);
  q.push(5);
  q.push(8);
  q.push(3);
  q.emplace(4);
  
  q.front() += 10;
  cout << q.front() << endl;
  cout << q.back() << endl;
  q.pop();
  cout << q.front() << endl;
  
  // Push, Pop, Front, back happens in O(1) time complexity.
  
  return 0;
}