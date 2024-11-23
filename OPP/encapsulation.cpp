#include <iostream>
#include <string>
using namespace std;
//* Incapsulation is wrapping up of data members and methods into single unit called class
//* Encapsulation is used to hide the data from the outside world and only allow the methods to access
//* it. This is done to prevent the data from being modified accidentally or maliciously.
class Account {
    private:
        double balance;
    public:
        int userID;
        string userName;
    
    void showUserName()
    {
        cout << "User name is: " <<  userName << endl;

    }
};

int main ()
{
    
}