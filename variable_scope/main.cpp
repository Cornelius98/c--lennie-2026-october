#include <iostream>

using namespace std;

int customer_age = 20;

//Prototype function
void testVariableScope();

int main()
{
    cout << "Customer Age: " << customer_age << endl;

    //Build locally scoped variable
    int locally_scoped = 300;

    //Locally scoped variable, used within it's local scope
    cout << "Local Scope: " << locally_scoped << endl;

    //Invoke function that calls locally scoped variable
    testVariableScope();

    return 0;
}

//Implement prototyped function
void testVariableScope(){
    cout << locally_scoped << endl; //Won't run because is locally scoped
}

