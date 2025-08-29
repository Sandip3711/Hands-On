#include<iostream>

using namespace std;

// Function template
template <typename T>
T add(T a, T b)
{
    return a+b;
}

template <typename T>
T sub(T a, T b)
{
    return a-b;
}


int main(){
    cout<<add<int>(10, 5)<<endl;
    cout<<sub<int>(20, 10)<<endl;
    return 0;
}