#include<iostream>
using namespace std;
#include "Complex.h"

Complex::Complex(int r, int i)
{
	real = r;
	imag = i;
}
void Complex::setReal(int r)
{
	real = r;
}
void Complex::setImag(int i)
{
	imag = i;
}
int Complex::getReal()
{
	return real;
}
int Complex::getImag()
{
	return imag;
}
void Complex::print()
{
	cout << "Real number is: " << real << endl << "Imaginary number is: " << imag << endl;
}
void Complex::setValue(int r, int i)
{
	real = r;
	imag = i;
}
bool Complex::isReal()
{
	if (real == 0)
		return true;
	else
		return false;
}
bool Complex::isImag()
{
	if (imag == 0)
		return true;
	else
		return false;
}
void Complex::Add(Complex C)
{
	real += C.getReal();
	imag += C.getImag();
}

Complex Add(Complex C1, Complex C2)
{
	Complex C3;
	int x= C2.getReal() + C1.getReal();
	C3.setReal(x);
	int y = C2.getImag() + C1.getImag();
	C3.setImag(y);
	return C3;
}
