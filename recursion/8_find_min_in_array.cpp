#include <iostream>
using namespace std;

int findMin(int arr[] , int n)
{
    if(n == 0)
        return arr[0];
    int min = findMin(arr, n-1);
    return (arr[n-1] < min) ? arr[n-1] : min;
}
int main()
{
    int arr[] = {10,5,0,3,1,100};
    cout << findMin(arr, 6);
}