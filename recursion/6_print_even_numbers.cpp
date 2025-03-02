#include <iostream>
using namespace std;

void printEven(int n)
{
    if(n <= 0)
    {
        return;
    }
    if(n%2 == 0)
        cout << n << endl;
    printEven(n-1);
}

int main()
{
    int n = 5;   
    printEven(n);
}