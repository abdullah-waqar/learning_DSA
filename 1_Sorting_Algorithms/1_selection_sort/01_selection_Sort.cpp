#include <iostream>
using namespace std;

int main()
{
    //TODO: Implement the bubble sort in the increasin order/accending order:
    
    int n = 5;
    int arr[n] = {7 , 4 , 8 , 5 , 3};

    //* Looping through the array of size n.

    for(int i = 1; i < n; i++)
    {
        //* comparing the "J" element with "J+1" and if it is small than we are swaping.

        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j] , arr[j+1]);
        }
    }

//? Loop to print the array

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}