#include <iostream>
#include <string>
using namespace std;

void reverseWord(string &str)
{
    int start = 0;
    int end = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ' || i == str.length() -1)
        {
            end = i - 1;

            if(i == str.length()-1)
                end = i;

            while(start < end)
            {
                swap(str[start++] , str[end--]);
            }
            start = i + 1;
        }
    }

}
int main()
{
    string str = " hello world this is a test";
    cout <<  "original string is: " << str << endl;
    reverseWord(str);
    cout << "reversed word string is: " <<  str << endl;
    

}