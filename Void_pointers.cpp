#include <iostream>
using namespace std;
void increase (void* data, int psize){
if ( psize == sizeof(char) )
{ char* pchar; pchar=(char*)data; ++(*pchar); }
else if (psize == sizeof(int) )
{ int* pint; pint=(int*)data; ++(*pint); }}
int main (){
char a = 'x';
int b = 1602;
increase (&a,sizeof(a));
increase (&b,sizeof(b));
cout << a << ", " << b << endl;
return 0;}
/* Basically in this function you are passing the address of you variable and it doesn't depend with datatype it is because 
you are going to use a void function that as a template can work through each datatype.
And here you are just adding one to the value of each variable ( I presume that to the char variable you are adding 1 to the ASCII value).
*/