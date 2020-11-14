#pragma once

class Complex
{
private:
	int real;
	int imag;
public:
	Complex(int r=0, int imag=0);
	void setReal(int r);
	void setImag(int i);
	int getReal();
	int getImag();
	void print();
	void setValue(int r, int i);
	bool isReal();
	bool isImag();
	void Add(Complex C);
};

