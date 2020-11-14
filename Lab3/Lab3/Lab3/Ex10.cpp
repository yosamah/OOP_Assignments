#include <iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int width;
public:
	void Set(int l = 2, int w = 1)
	{
		length = l;
		width = w;
	}
	int getLength()
	{
		return length;
	}
	int getWidth()
	{
		return width;
	}
	int area()
	{
		return length * width;
	}
	float perimetr()
	{
		return ( (float)(length + width)*(1.00/2.00));
	}
};

int main()
{
	Rectangle r1;
	r1.Set(3, 7);
	int area = r1.area();
	float per = r1.perimetr();
	cout << area << endl << per;
	return 0;
}


