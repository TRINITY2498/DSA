#include <bits/stdc++.h>
using namespace std;

int main() {
    
    double a,b;
    
    cin >> a >> b;
    
    cout << fixed << setprecision(2);
    
    cout << double(a * b) << '\n';
    
    if (b == 0){
        cout << "Undefined";
    }
    
    else{
        
        cout << a / b << '\n';
    }

    return 0;
}