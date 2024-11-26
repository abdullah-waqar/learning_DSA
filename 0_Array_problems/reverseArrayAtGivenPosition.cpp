#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v, int position)
{
    int s = position+1;
    int e = v.size()-1;

    while(s <= e)
    {
        swap(v[s] , v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    // inserting some elements in vector
    for(int i = 1; i <= 6; i++)
    {
        v.push_back(i);
    }

    vector<int> ans = reverse(v , 2);
    print(ans);
}