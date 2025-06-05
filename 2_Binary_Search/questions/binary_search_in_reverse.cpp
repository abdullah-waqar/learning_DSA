#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int start = 0;
    int end = size -1;
    int mid = start + (end - start) / 2;

    while(start <= end )
    {
        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            break;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }


}