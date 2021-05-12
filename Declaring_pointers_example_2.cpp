// more pointers
#include <iostream>
using namespace std;
int main ()
{
int firstvalue = 5, secondvalue = 15;
int * p1, * p2;
p1 = &firstvalue; // p1 = address of firstvalue
p2 = &secondvalue; // p2 = address of secondvalue
*p1 = 10; // value pointed by p1 = 10
*p2 = *p1; // value pointed by p2 = value pointed by p1
p1 = p2; // p1 = p2 (value of pointer is copied)
*p1 = 20; // value pointed by p1 = 20
cout << "firstvalue is " << firstvalue << endl;
cout << "secondvalue is " << secondvalue << endl;
return 0;
}
/* Here we have firstly assigned a value to the int variables, so this allocated memory now has a defined value,
so if I point to any of these with a pointer I can actually access and change the value of them with the pointers by reference.
That is what the code is doing when p1 assigns the value of 10 to first value, after that he is just copying the value and reference from p2,
that's why he can change the value of second value again with p1.
*/