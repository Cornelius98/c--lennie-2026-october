#include <iostream>

using namespace std;

//Prototype function
void mutateVariable(int a);

int main()
{
    //Write variable (single line comment)
    int a = 20;

    /*
      - write a function
      - it should accept variable
      - multiply variables
    */
    mutateVariable(a);

    return 0;
}

void mutateVariable(int a){
    int result = a * 100 / 2.5;
    cout << "Result: " << result << endl;
}
