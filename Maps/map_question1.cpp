/*
    Given N Strings, print unique srings in lexicographical order with their frequency.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    map<string, int> m;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}