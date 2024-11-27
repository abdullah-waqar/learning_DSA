#include <iostream>
using namespace std;

int main()
{
    int n = 5 , m = 3 , size = 8;
    int arr1[n] = {1,3,5,7,9};
    int arr2[m] = {2,4,6};

    int arr3[size] = {0};

    int i = 0;
    int j = 0;
    int k = 0;
    while( (i < n) && (j < m) )
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
           
        else if(arr1[i] > arr2[j])
            arr3[k++] = arr2[j++];
    }

    while(i < n)
        arr3[k++] = arr1[i++];
        

    while(j < n)
        arr3[k++] = arr2[j++];
    

    // prinint array

    for(int i = 0; i < size; i++)
        cout << arr3[i] << " ";

    
}