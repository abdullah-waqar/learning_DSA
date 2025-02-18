// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[] = {1,2,4,5}; // size 4
    int size = 4;
    int missing = -1;
    bool flag = false;
    for(int i = 0; i < size; i++)
        {
             flag = false;
            for(int j = 1; j <= size; j++)
                {
                    if(arr[i] == j)
                    {
                        flag = true;
                        break;
                    }
                    else{
                        missing = j;
                    }
                }
        }

    if(flag)
    {
        cout << "All elements are present";
    }
    else {
        cout << missing << " is missing in the array" << endl;
    }
    
   return 0;
}

//* Better Approch: finding the missing element using the hashing

// #include <iostream>
// using namespace std;
// int main() {
//    int arr[] = {1,2,4,5};
//     int size = 5;
//     int hash[size+1] = {0};
//     for(int i = 0; i < size-1; i++)
//         {
//             cout << arr[i] << " ";
//         }
// cout << endl;
//     for(int i = 0; i < size-1; i++)
//         {
//             hash[arr[i]]++;
//         }

//      for(int i = 1; i < size+1; i++)
//         {
//             if(hash[i] == 0)
//             {
//                 cout << "missing element is: " << i << endl;
//                 break;
//             }
//         }
    
    
    
//    return 0;
// }

//* Optimal approch using summation formula


// #include <iostream>
// using namespace std;
// int main() {
//    int arr[] = {1,2,4,5};
//     int size = 5;

//     int sum1  = size * (size + 1) / 2;

//     int sum2  = 0;
//     for(int i = 0; i < size-1; i ++)
//         {
//             sum2+=arr[i];
//         }

//     if(sum1 - sum2 > 0)
//     {
//         cout << "missing number is: " << sum1 - sum2 << endl;
//     }
//     else {
//         cout << "No missing number" << endl;
//     }
    
    
//    return 0;
// }