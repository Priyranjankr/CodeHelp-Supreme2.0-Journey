#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int *ptr = &a;

    cout << "a:" << a << endl;
    cout << "&a:" << &a << endl;
    //  cout<<"*a:"<<*a<<endl; -->> operand of '*' must be a pointer but has type "int"
    cout << "ptr:" << ptr << endl;
    cout << "*ptr:" << *ptr << endl;
    cout << "&ptr:" << &ptr << endl;
    cout << "(*ptr)++:" << (*ptr)++ << endl;
    cout << "++(*ptr):" << ++(*ptr) << endl;
    cout << "(*ptr) = (*ptr/2):" << (*ptr) / 2 << endl;
    cout << "(*ptr)= (*ptr)-2:" << (*ptr) - 2 << endl;
    return 0;
}