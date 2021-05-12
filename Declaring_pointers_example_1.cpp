// my first pointer
#include <iostream>
using namespace std;
int main ()
{
int firstvalue, secondvalue;
int * mypointer;
mypointer = &firstvalue;
*mypointer = 10;
mypointer = &secondvalue;
*mypointer = 20;
cout << "firstvalue is " << firstvalue << endl;
cout << "secondvalue is " << secondvalue << endl;
return 0;
};
/* Outputs is:
    firstvalue is 10
    secondvalue is 20   

mypointer is a int pointer that is pointing to the address of two different int variables first at "firstvalue" and second to "secondvalue"
So, because mypointer is directly connected to the memory allocated of each int variables, it can change its value by reference and that is
what is doing when *mypointer = 10 or 20, just giving to the pointed variable a value.
*/