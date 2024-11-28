#include <iostream>
using namespace std;

void reverse(int arr[] , int low , int high)
{
    while(low < high)
        swap(arr[low++] , arr[high--]);
    
}

int  main() {

    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;

    reverse(arr, 0, 6);
    reverse(arr, 0, k-1);
    reverse(arr, k, 6);

    for(int i = 0; i<7; i++)
        cout << arr[i] << " ";
    
}