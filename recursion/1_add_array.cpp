#include <iostream>
using namespace std;

int sum(int arr[] , int n)
{
    if(n>=0)
    {
        return arr[n] + sum(arr, n-1);
    }
    else {
        return 0;
    }
 
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 4;
     cout << sum(arr, n);
}