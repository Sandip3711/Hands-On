#include <iostream>
using namespace std;

class Base_class
{
public:
    virtual void print()
    {
        cout << "base class virtual method\n";
    }
};

class Derived_class : public Base_class
{
public:
    void print() override
    {
        cout << "Derived class Method\n";
    }
};

int main()
{
    Base_class b;
    b.print();

    Derived_class d;
    d.print();
}