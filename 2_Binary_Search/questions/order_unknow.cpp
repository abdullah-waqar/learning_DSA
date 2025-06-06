#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    if(arr[start] < arr[end])
    {
        cout << "Array is sorted in ascending order." << endl;
        while (start <= end)
    {
        if (arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    }
    else
    {
        cout << "Array is sorted in descending order." << endl;
        while (start <= end)
        {
            if (arr[mid] == target)
            {
                cout << "Element found at index: " << mid << endl;
                break;
            }
            else if (arr[mid] > target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
    }
    

    return 0;
}