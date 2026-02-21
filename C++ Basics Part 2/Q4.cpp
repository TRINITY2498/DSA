#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += i;
    }
}

void modifyInt(int x) {
    x += 5;
}

void modifyInt1(int& x){
    x += 5;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int y = 7;
    
    modifyArray(array, 5);
    modifyInt(y);
    modifyInt1(y);
    
    cout << "Modified array[3] = " << array[3] << ", " << "Modified y = " << y << endl;
    
    return 0;
}