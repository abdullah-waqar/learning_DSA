#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0,0,0,1,0};
    int f = 0;
    int l = 4;

    while(f <= l)
    {
        if(arr[f] == 0)
            f++;
        else if(arr[l] == 1)
            l--;
        else {
            swap(arr[f] , arr[l]);
        }
    }

    for(int v : arr)
        cout << v << " " ;
}