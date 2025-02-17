#include <iostream>
using namespace std;
//* Constructor automatically initlized at the time of object creation. Used for initilization
 //! Same name as class
 //! Constructor doesn't have return type
 //! Only called once(Automatically), at the object creation
 //! Memory allocation happens when constructor is called


 //? This keyword: this is a speacial pointer in cpp that points to the current object.

 //* this->prop is same as *(this).prop
class Account {
    private:
        double balance;
    public:
        int userID;
        string userName;
    
    //* Constructor: Non parameterized
    Account() {
        userID = 0000;
        userName = "Unknown";
        balance = 0.0;
    }
    //* parametrized constructor
    Account(int userID, string userName, double balance) {
        this->userID = userID;
        this->userName = userName;
        this->balance = balance;
    }

    // Creating our own copy constructor when we create our own copy constructor defualt one will not called

    Account (Account &other) {
        *(this).userID = other.userID;
        *(this).userName = other.userName;
        *(this).balance = other.balance;
    }

    void showUserName()
    {
        cout << "User name is: " <<  userName << endl;

    }
};

int main ()
{

    Account a1(1234, "Tom",  1000.0);

    // Copy constructor (default) is a speacil constructor used to  copy the one object into the another
    // It is used to copy the object from one place to another

    // Account a2(a1); // Default copy constructor --invoked here

    Account a3(a1);

    
}