#include <iostream>
using namespace std;
int addition (int a, int b)
{ return (a+b); }
int subtraction (int a, int b)
{ return (a-b); }
int operation (int x, int y, int (*functocall)(int,int))
{
int g;
g = (*functocall)(x,y);
return (g);
}
int main ()
{
int m,n;
int (*minus)(int,int) = subtraction;
m = operation (7, 5, addition);
n = operation (20, m, minus);
cout <<n;
return 0;}
/*Bassically you are just declaring pointers but with a function call, so when you use this pointer you are just pointing to a function,
I don't know what else to say, because it is like to put the function but now with the name of the pointer that is pointing to this function.
*/