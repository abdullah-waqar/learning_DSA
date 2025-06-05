#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[5] = {20 , 17 , 15 , 14 , 13};
    int target = 17;

    int start = 0;
    int end = 4;
    int flag = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << start << " " << end << endl;
        if(arr[mid] == target)
        {
            flag = 1;
            cout << "Accending" << endl;
            break;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else if(target > arr[mid])
        {
            start = mid + 1;
        }
        
    }
    if(flag == -1)
    {
        cout << "Decending order" << endl;
    }
   
    
}