#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address that pointer p is holding: " << p << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value that pointer p is pointing to: " << *p << endl;
}