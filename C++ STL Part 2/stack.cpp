#include<bits/stdc++.h>
using namespace std;

int main() {
  
  stack<int> stk; // Last in First Out.
  
  stk.push(1);
  stk.push(8);
  stk.push(4);
  stk.push(7);
  stk.emplace(3);
  
  // cannont do stk [0]. Gives error.
  
  cout << stk.top() << endl;
  stk.pop();
  cout << stk.top() << endl;
  cout << stk.size() << endl;
  cout << stk.empty() << endl;
  
  stack<int> stk1;
  stk.swap(stk1);
  
  return 0;
}