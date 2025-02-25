#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum == k)
            {
                count = max(count , (j - i)+1);
            }
        }
    }
    return count;
    
}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    cout << longestSubarray(arr, k);

}