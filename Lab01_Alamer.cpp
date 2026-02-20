#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;
    *b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(&x, &y);

    cout << "\nAfter Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}