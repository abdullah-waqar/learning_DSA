#include <iostream>
using namespace std;

void increment(int *a)
{
    *a = *a + 1;
}

int main(int argc, char const *argv[])
{
    int x = 10;
    increment(&x);
    cout << x << endl;
    return 0;
}
