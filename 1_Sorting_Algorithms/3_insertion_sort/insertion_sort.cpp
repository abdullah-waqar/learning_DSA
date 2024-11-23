#include <iostream>
using namespace std;

int main()
{

    //? Time Complexity: BEST CASE: 0(N) AND WORST CASE: 0(N^2)
    //? Space Complexity: O(1)
    
    int n = 5;
    int arr[5] = {5 , 4 , 3 , 2 , 0};

    for(int i = 0; i < n-1; i++)
    {
        //* IF I FOUND THE ELEMENT "j" SMALLER THAN "j-1", I'LL SWAP
        for (int j = i+1; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
                swap(arr[j] , arr[j-1]);
            //! if the element is bigger than i'll break the loop b/c elemet is in the right place.
            else
                break;
        }
    }

    //* THIS LOOP IS JUST FOR PRINTING THE ARRAY ELEMENTS
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}