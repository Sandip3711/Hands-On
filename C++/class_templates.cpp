#include<iostream>

using namespace std;

template <typename A, typename B>
class demo{
    public:
    A right;
    B left;

    demo(A a, B b){
        right = a;
        left = b;
    }

    void display(){
        cout<<"The values are: "<<right <<": "<<left<<endl;
    }
};

int main()
{
    demo<int, int> int_demo(10, 20);
    int_demo.display();
    demo<string, float> str_demo("Hello", 292.22);
    str_demo.display();
}
