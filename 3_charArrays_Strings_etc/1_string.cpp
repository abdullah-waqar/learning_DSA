#include <iostream>
using namespace std;


class Solution 
{
private:
    bool valid(char ch)
    {
        if( ( (ch >= 'A') && (ch  <= 'Z') ) || ( (ch >= 'a') && (ch <= 'z') ) || ((ch >= '0') && (ch <= '9')))
            return 1;
        return 0;
    }

    

    char toLowerCase(char ch)
    {
        if( (ch >= 'a' && ch <= 'z' ) || (ch >= '0' && ch <= '9') )
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPlaindrome(string str)
    {
        int s = 0;
        int e = str.length()-1;
        bool answer = true;
        while(s < e)
        {
            if(str[s++] != str[e--])
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";

        // removing the  non-alphanumeric characters
        for(int i = 0; i < s.length(); i++)
        {
            if(valid(s[i]))
                temp.push_back(s[i]);
        }
        
        // converting string to lower case
        for(int i = 0; i < temp.length(); i++)
        {
            temp[i] = toLowerCase(temp[i]);
        }
    cout << temp << endl;
        // checking isPlaindrome
        return checkPlaindrome(temp);
    }
};



int main() {
        Solution sol;
        cout << sol.isPalindrome("A man, a plan, a canal: Panama");
}