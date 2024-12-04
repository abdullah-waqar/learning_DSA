#include <iostream>
#include <string>
using namespace std;

void reverse(char name[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start < end)
        swap(name[start++] , name[end--]);
}

int getLength(char name[])
{
    int count = 0;
   
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    // char can only store one single character and if we want to store the multiple characters than we can use the character array

    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    cout << getLength(name) << endl;

    reverse(name , getLength(name));

    cout << "Your reverse name is: " << name << endl;
    
}