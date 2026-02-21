#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int sum = 0;
    
    do {
        sum += x;
        x--;
    } while (x-- > 0);
    
    cout << "Sum = " << sum << endl;
    
    return 0;
}