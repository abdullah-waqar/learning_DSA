#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
    
    virtual void hello()
    {
        cout << "Hello From he person" << endl;
    }
    Person()
    {
        cout << "Person class constructor called" << endl;
    }

    ~Person()
    {
        cout << "Person class deconstructor called" << endl;
    }
};

class Student : public Person {
    public:
        int rollno;

    Student()
    {
        cout << "Student class constructor called" << endl;
    }
    ~Student()
    {
        cout <<  "Student class deconstructor called" << endl;

    }
    void printInfo()
    {
        cout <<  "Name: " << name << endl;
        cout <<   "Age: " << age << endl;
        cout << "Roll number: " << rollno << endl;
    }

    void hello()
    {
        cout << "Hello From the student" << endl;
    }
};

int main()
{
    Student std1;
    std1.name = "Tom";
    std1.age = 20;
    std1.rollno = 341;
    std1.printInfo();

    std1.hello();
}