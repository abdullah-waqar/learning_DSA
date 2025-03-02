#include <iostream>
using namespace std;

bool sorted = true;
bool isSorted(int arr[] , int n , int size)
{
    if(n == size)
    {
        return sorted;
    }
    if( !(arr[n] >= arr[n-1]))
    {
        sorted = false;
        return sorted;
    } 

    isSorted(arr, n+1, size);
    return sorted;
}

int main()
{
    int arr[] = {1,2,9,4,5};
    cout << isSorted(arr, 1 , 5);
}