// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,0,2,3,2,0,0,4,5,1}; // size 10
    int size = 10;
    int j = 0;
    for(int i = 0; i < size; i++)
        {
            if(arr[j] != 0)
                j++;
            else if(arr[i] !=0 )
            {
                swap(arr[i] , arr[j]);
                j++;
            }
        }
    for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

    return 0;
}