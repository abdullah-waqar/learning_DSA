#include <iostream>
using namespace std;

void reverseStr(char *ch)
{
    if(*ch != '\0')
    {
        reverseStr(ch+1);
        cout << *ch;
    }
}
int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    char *str = new char[size + 1];
    cin >> str;
    
    reverseStr(str);
}
