#include<iostream>
#include"kingston.h"
using namespace std;
//below is an example of template, if you have method and uses all ints but want to change it this is the easiest and best way to do so 

template <class eleType>
void swapval (eleType &A, eleType &B) {
    eleType tmp = A;
    A = B;
    B = tmp;
} 

template <class eleType>
int cmpval (eleType a, eleType b) {
    if (a < b)
         return 1;
    else
         return 0;
}


int main()
{
rectangle one(2,1);
rectangle two(20,10);
rectangle three;

//three=one.add(two);
three = one + two;
three.printall();

three = one - two;
three.printall();

// Test template
int a = 7;
int b =8;
if(cmpval(a,b))
    cout <<"A greater than B"<<endl;

char c1 = 'a';
char c2 = 'b';
if(cmpval(c1, c2))
    cout <<"c1 greater than c2"<<endl;
else
    cout <<"c1 less than c2"<<endl;



char A='A';
char B='B';

swapval(A,B);
cout<<"A is now: "<<A<<endl;
cout<<"B is now: "<<B<<endl;

if(cmpval(one,two))
cout<<"one is less then two"<<endl;
else
    cout<<"two is less then one"<<endl;

ex(one);
}
