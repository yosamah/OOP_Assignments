#include <iostream>
using namespace std;
#include "Complex.h"

Complex Add(Complex C1, Complex C2);

int main()
{
	 
	Complex c(2);
	c.print();
	c.setReal(3);
	c.print();
	c.setImag(15);
	c.print();
	int y=c. getReal();
	cout << y << endl;
	int z = c.getImag();
	cout << z << endl;
	c.setValue(10, 9);
	c.print();
	Complex C(3, 7);
	c.Add(C);
	c.print();
	Complex l= Add(c, C);
	l.print();

	return 0;
}