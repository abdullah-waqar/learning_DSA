#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0,0,1,1,1,2,2,3,3,4};

    int k = 0;
    
    int x = 0;
    
    for(int i = 1; i < 10; i++)
    {
        if(arr[i] != arr[x])
        {
            x = x + 1;
            k++;
            arr[x] = arr[i];
        }
    }

    for (int val : arr)
        cout << val << " ";
    cout << endl <<  k << endl;
}