#include <iostream>

using namespace std;

int main()
{

    //Write constants variable
    const int CUSTOMER_HEIGHT = 2.0;

    //Print constants
    cout << "Constant: " << CUSTOMER_HEIGHT << endl;

    //Attempt to modify (change) constant's value
    CUSTOMER_HEIGHT = 50;



    return 0;
}
