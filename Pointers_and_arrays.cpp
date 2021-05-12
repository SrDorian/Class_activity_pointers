// more pointers
#include <iostream>
using namespace std;
int main ()
{
int numbers[5];
int * p;
p = numbers; *p = 10;
p++; *p = 20;
p = &numbers[2]; *p = 30;
p = numbers + 3; *p = 40;
p = numbers; *(p+4) = 50;
for (int n=0; n<5; n++)
cout << numbers[n] << ", ";
return 0;
}
/* Here is just accessing to each a element of the array with different ways, because at the first instance the pointer is pointing to
the array "numbers" it is in fact pointing to the first element, so you can just access to the value of each element by different ways.
*/