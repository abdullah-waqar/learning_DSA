#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int carry = 1;
    if(digits[digits.size()-1] != 9)
    {
        digits[digits.size()-1]++;
        return digits;
    }

    for(int i = digits.size()-1; i>=0; i--)
    {
        int sum = carry + digits[digits.size()-1];
        if(sum >= 10)
        {
            digits[i] = 0;
        }
        else{
            digits[i] = sum;
        }
        carry = sum / 10;
    }
    if(carry)
    {
        digits.insert(digits.begin(), carry);
    }
    return digits;
}

int main()
{
    vector<int> digits;
    int n = 0;
    cout << "Enter how many digits you want to enter: ";
    cin >> n;

    for(int i =0; i< n; i++)
    {
        int digit;
        cout << "Enter " << i+1 << " digit: ";
        cin >> digit;

        digits.push_back(digit);
    }
    plusOne(digits);
    cout << endl;
    for(int i = 0; i<digits.size(); i++)
    {
        cout << digits[i] << " ";
    }
    
}