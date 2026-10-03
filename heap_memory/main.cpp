#include <iostream>

using namespace std;
class Person {
public:
    float height = 1.5;
    void talk(){
        cout << "Person is chatting" << endl;
    }
};

int main()
{
    //Create class object (new keyword allocates object on heap memory and not stack memory)
    Person* n = new Person();

    //Access class method
    n->talk();


    return 0;
}
