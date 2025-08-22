#include <iostream>

using namespace std;

int main()
{
    /// Size of the data types in C++

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << "\n";    // 4 bytes (typically)
    cout << sizeof(myFloat) << "\n";  // 4 bytes
    cout << sizeof(myDouble) << "\n"; // 8 bytes
    cout << sizeof(myChar) << "\n";   // 1 byte
    cout << sizeof(bool) << "\n";     // 1 byte (typically)
    /*
    string str = "Hello, World!";
    cout << str << endl;
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    cout << str.empty() << endl;
    cout << str.front() << endl;
    cout << str.back() << endl;
    cout << str.at(0) << endl;
    cout << str[0] << endl;
    cout << str.substr(0, 5) << endl;
    cout << str.find("World") << endl;
    cout << str.replace(7, 5, "C++") << endl;
    cout << str.insert(7, "C++ ") << endl;
    cout << str.erase(7, 4) << endl;
    cout << str.append(" How are you?") << endl;
    cout << str + " Welcome!" << endl;

/////////// Structures in C++ /////////// collections of different data types
    // A structure is a user-defined data type that allows grouping of variables of different types.
    struct {
        int id;
        string name;
        double marks;
    } sona, mona;
    sona.name = "John Doe";
    cout << "Student Name: " << sona.name << endl;

    // Named structure
    struct car{
        string brand;
        string model;
        int year;
    };
    car myCar;
    myCar.brand = "Toyota";
    cout << "Car Brand: " << myCar.brand << endl;

///////////// Enum in C++ ///////////
//An enum is a special type that represents a group of constants (unchangeable values).
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };
    enum Level myLevel = HIGH;
    cout << "Current Level: " << myLevel << endl;

    enum operations{
        ADD = 1,
        SUBTRACT = 2
    };

    enum operations op = ADD;
    cout << "Selected Operation: " << op << endl;



    //////// C++ References //////////
    // A reference is an alias for another variable. It allows you to create a new name for an existing variable.

    int x = 10;
    int &refX = x;
    cout << "Original x: " << x << endl;
    cout << "Reference refX: " << refX << endl;

    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger


    //////////// Pointers in C++ //////////
    // A pointer is a variable that stores the memory address of another variable.
    // A pointer however, is a variable that stores the memory address as its value.
    // A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
    // The & operator is used to get the memory address of a variable.
    // The indirection or dereference operator * is used to access the value at the address the pointer is pointing to.
    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    cout << food << "\n"; // Outputs Pizza
    cout << ptr << "\n";  // Outputs the memory address of food
    cout << *ptr << "\n"; // Outputs Pizza (value at the address stored in ptr)
    *ptr = "Burger";      // Changes the value of food (the value at the address stored in ptr)
    cout << food << "\n"; // Outputs Burger


    cout << sizeof(int*) << endl;
    cout << sizeof(double*) << endl;
    cout << sizeof(char*) << endl;

*/
    return 0;
}
