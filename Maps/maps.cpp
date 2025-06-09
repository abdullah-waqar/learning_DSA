#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << "Size of the map is: " << m.size() << endl;
    for(auto &pr: m)
    {
        cout << "Key: " << pr.first << " Value: " << pr.second<< endl;
    }
}

int main()
{
    map<int, string> m;
    // map is a data structure which stores key value pairs
    // it is ordered by key

    // m[key] = value
    m[1] = "abc"; // O(log n) time complexity
    m[5] = "cdc";
    m[3] = "acd";
    m[6]; // this will create a key 6 with value "" (empty string) and time complexity is O(log n) 

    // we can also use insert function to insert elements
    m.insert({2, "bcd"});
    // m.insert(make_pair(4, "dcd"));

    // to print i can use iterator
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    // another way to print
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    m.erase(6); // O(log n) time complexity, removes key 6
    auto val = m.find(3); // O(log n) time complexity
    if(val != m.end())
    {
        cout << "Found: " << val->first << " " << val->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

   
}