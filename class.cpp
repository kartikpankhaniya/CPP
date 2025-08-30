#include <iostream>
using namespace std;
#include <string>
// class is a user define data type.

//classes have data mambers and mambar functions.
// object is a instance of a class . it uses like structur in clanguage 

// here is a simple example of calss and object 
class car{
 public:
    string brand;
    int speed;

    void drive()
    {
        cout << " car is driving "<< endl;
    }
};

int main()
{
    car mycar;
    mycar.brand ="maruti suzuki";
    cout << mycar.brand;
    mycar.speed=300;
    cout << mycar.speed;
    mycar.drive();
    return 0;
}