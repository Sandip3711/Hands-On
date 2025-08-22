#include <iostream>

using namespace std;

int main()
{
    auto result = []()
    {
        cout << "This is Lamda function" << endl;
        return "Hello";
    };
    cout << "Before calling Lamda function" << endl;
    cout << result() << endl;
    return 0;
}
