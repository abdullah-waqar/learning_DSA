#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    int b[] = {6};

    int num1 = a[0];
    int num2 = b[0];

    for(int i = 1; i < 4; i++)
    {
        num1 *= 10;
        num1 += a[i];
    }

    for(int i = 1; i < 1; i++)
    {
        num2 *= 10;
        num2 += b[i];
    }

    cout << num1 <<  " " << num2;

    cout << "Sum of two numbers: " << num1 + num2 << endl;
    
}