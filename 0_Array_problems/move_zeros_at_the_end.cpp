#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[size] = {2,0,1,3,0,0,1};

//* First approch
    // for(int i = 0; i < size; i++)
    // {
    //     if(arr[i] == 0)
    //     {
    //         int j = i;
    //         while(arr[j] == 0 && j < size-1)
    //             j++;
    //         swap(arr[i] , arr[j]);
    //     }
    // }
//* Second Approch
    int j = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    for(; j< size; j++)
        arr[j] = 0;


// loop to print the array
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}