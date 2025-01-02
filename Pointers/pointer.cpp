#include <iostream>
using namespace std;

int main()
{
    /*
    int a = 10;

    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address that pointer p is holding: " << p << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value that pointer p is pointing to: " << *p << endl;


    //* Pointer arithmetic

    int num = 20;
    int *address = &num;

    cout << "Address of num: " << address << endl;
    cout << "addition of 1 to address: " << address + 1 << endl; //* as it is an integer pointer, it will add 4 bytes to the address

    char *q = (char*)address;
    cout << endl;
    cout << "Character pointer: " << *q << endl;
 
    // * void pointers ----- Generic pointers

    void *v = &num;
    cout << "Void pointer: " << *(int*)v << endl; //! void pointers cannot be directly dereferenced, we need to typecast it to the appropriate type because it does not know the size of the data type it is pointing to.

*/

    //* Pointer to pointer
    int x = 5;
    int *y = &x;
    int **z = &y;
    int ***a = &z;
    int ****b = &a;

    cout << "Address of x: " << y << endl;
    cout << "Address of y: " << z << endl;
    cout << "Address of z: " << a << endl;
    cout << "Address of a: " << b << endl << endl;

    cout << "Value of x: " << *y << endl;
    cout << "Value of y: " << **z << endl;
    cout << "Value of z: " << ***a << endl;
    cout << "Value of a: " << ****b << endl << endl;


}