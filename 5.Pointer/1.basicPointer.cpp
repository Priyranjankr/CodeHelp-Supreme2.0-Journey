#include <iostream>
using namespace std;
int main()
{

    int a = 5;

    cout << a << endl;
    cout << "Address of a:" << &a << endl;

    //  pointer creation

    int *ptr = &a;

    // acessing the value through pointer ptr
    cout << "Address of a ptr store that address:" << ptr << endl;
    cout << "Value at ptr:" << (*ptr) << endl;
    cout << "Address of ptr:" << &ptr << endl;

    // size of pointer
    cout << "Size of ptr:" << sizeof(ptr) << endl;

    char ch = 'k';
    char *cptr = &ch;
    cout << "Size of cptr:" << sizeof(cptr) << endl;

    long lachi = 10;
    long *Iptr = &lachi;
    cout << "Size of Iptr:" << sizeof(Iptr) << endl;

    // int *ptr1; -->> bad practice
    // cout<<*ptr1;
    int *ptr2 = 0;

    return 0;
}