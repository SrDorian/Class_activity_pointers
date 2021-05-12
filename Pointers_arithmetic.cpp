#include <iostream>
using namespace std;
int main() {
char shahnaz, mahnaz;
char * p =&shahnaz;
char * q =&mahnaz ;
*p = 'h';
*q=*(++p);
cout <<"p="<<*p<<endl;
cout <<"shahnaz="<<shahnaz<<endl;
cout <<"q="<<*q<<endl;
return 0; }
/*It is just printing shahnaz=h because when we sett *p to 'h' we have just changed the value of shahnaz.*/