#include <iostream>
using namespace std;

int main()
{
    int nums[8] = {0,1,2,2,3,0,4,2};
    int f = 0;
    int l = 7;

    int k = 0;

    int val = 2;

  while(f <= l)
  {
    if(nums[f] == val)
    {
        if(nums[nums[l]] != val)
        {
            swap(nums[f++] , nums[l--]);
            k++;
        }
        else {
            l--;
        }
    }
    else {
        f++;
        k++;
    }
  }

    for(int v : nums)
        cout << v << " " ;
    cout << endl;
    cout << "k: " << k << endl;
}