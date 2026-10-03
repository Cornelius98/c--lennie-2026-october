#include <iostream>

using namespace std;

int main()
{
    //Create a variable
    int a = 200;

    //Create pointer variable
    int *ptr = &a;

    //Show memory address
    cout << "Memory Address: " << ptr << endl;

    //De-referencing a pointer (Means showing value kept at memory address)
    cout << "Dereferenced Value: " << *ptr << endl;

    //Modifying a pointer
    *ptr = 500;

    //Dereference pointer again
    cout << "De-reference pointer: " << *ptr << endl;

    return 0;
}
