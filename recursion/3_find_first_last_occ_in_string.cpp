#include <algorithm>
#include <iostream>
using namespace std;

int f = -1;
int l = -1;

void findOcc(string str, int idx , char ele)
{
    if(idx == str.length())
    {
        cout << f << " " << l << endl;
        return;
    }

    char currElement = str[idx];
    if(currElement == ele)
    {
        if(f == -1)
        {
            f = idx;
        }
        else {
            l = idx;
        }
    }
    findOcc(str, idx+1 , ele);
}

int main()
{
    string a = "abcdat";
    findOcc(a , 0 , 'a');

}