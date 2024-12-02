#include <iostream>
using namespace std;

int main()
{
    // char can only store one single character and if we want to store the multiple characters than we can use the character array

    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;
}