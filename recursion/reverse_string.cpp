#include <iostream>
using namespace std;

void reverse(string str , int n)
{
    if(n>=0)
    {
        cout << str[n];
        reverse(str, n-1);
    }
}
int main()
{
    string str = "Hello";
    reverse(str, str.length()-1);
}