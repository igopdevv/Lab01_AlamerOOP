#include <iostream>
using namespace std;

int swap (int* x, int* y){

    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
    return 0;
}

main (){

    int X = 10, Y =20;

    cout << "Before swapping: " << endl;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;

    swap(&X, &Y);

    cout << "After swapping: " << endl;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;

    return 0;
}