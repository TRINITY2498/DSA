#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    char op;
    
    cin >> a >> b >> op;
    
    if (op == '+'){
        
        cout << a + b << '\n';
    }
    
    else if (op == '-'){
        
        cout << a - b << '\n';
    }
    
    else if (op == '*'){
        
        cout << a * b <<'\n';
        
    }
    
    else if (op == '/'){
        
        if (b != 0){
            
            cout << a / b << '\n';
        }
        
        else {
            
            cout << "Undefined" << '\n';
        }
    }

    return 0;
}