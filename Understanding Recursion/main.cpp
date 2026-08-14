#include<bits/stdc++.h>
using namespace std;

int i = 0;
 
void hello(){

    if(i == 4){return;}

    i++;

    cout << "Hello World" << endl;

    hello();


}

int main() {

    hello();


  return 0;
}