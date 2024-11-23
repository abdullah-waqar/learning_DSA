#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {2 , 4 , 6 , 8 , 10};
    int first = 0;
    int last = 4;
    int mid = (first + last)/2;

    int target = 7;
    
    while (first<=last)
    {
        if(arr[mid] == target)
        {
            cout << "Value is at index position: " << mid << endl;
            break;
        }
        else if (arr[mid] > target)
        {
            last = mid - 1;
            mid = (last + first)/2;
        }
        else if (arr[mid] < target)
        {
            first = mid + 1;
            mid = (first + last) / 2;
        }


        
    }    
}