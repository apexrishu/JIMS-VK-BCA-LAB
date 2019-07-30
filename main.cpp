//Program to add two complex numbers using friend function

#include<iostream>

using namespace std;

class complex

{

int real,imag;

public:

void set()

{
cout<<"\nEnter Real & Imag Part: ";

cin>>real>>imag;

}

friend complex sum(complex,complex);

void display();

};

void complex::display()

{
cout<<"\nThe sum of complex num is: "<<real<<"+"<<imag<<"i";

}

complex sum(complex a,complex b)

{

complex t;

t.real=a.real+b.real;

t.imag=a.imag+b.imag;

return t;

}

int main()

{
cout<< "Made by Rishu Sinha, 41014202017\n";
complex a,b,c;

a.set();

b.set();

c=sum(a,b);

c.display();

return(0);

}
