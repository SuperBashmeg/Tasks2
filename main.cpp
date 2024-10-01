#include "lib.h"

class Circledw
{
protected:
	int diameter;
public:
	Circledw()
	{
		cout << "Circle constructor" << endl;
		diameter = 2;
	}
	Circledw(int value)
	{
		cout << "Circle constructor with value" << endl;
		this->diameter = value;
	}

	virtual void get_value()
	{
		cout << "Size from Circle: " << diameter << endl;
	}

	virtual ~Circledw()
	{
		cout << "Circle destructor" << endl;
	}
};


class Squaredw
{
protected:
	int size;
public:
	Squaredw()
	{
		size = 1;
		cout << "Square constructor" << endl;
	}
	Squaredw(int size)
	{
		this->size = size;
		cout << "Square constructor with value" << endl;
	}
	virtual void get_value()
	{
		cout << "Size from Square: " << size << endl;
	}
	virtual ~Squaredw()
	{
		cout << "Square destructor" << endl;
	}
};


class CircleInSquaredw : public Circledw, public Squaredw
{
public:
	CircleInSquaredw()
	{
		cout << "CircleInSquare constructor" << endl;
	}
	CircleInSquaredw(int value) : Circledw(value), Squaredw(value)
	{
		cout << "Child constructor with value" << endl;
	}
	void get_value() override
	{
		cout << "Diametr from CircleInSquare: " << diameter << endl;
		cout << "Size from CircleInSquare: " << size << endl;

	}
	virtual ~CircleInSquaredw()
	{
		cout << "Child destructor" << endl;
	}
};


int main() {
	Circledw* circle = new Circledw(5);
	Squaredw* square = new Squaredw(10);
	CircleInSquaredw* circleInSquare = new CircleInSquaredw(15);
	circle->get_value();
	square->get_value();
	circleInSquare->get_value();
	delete circle;
	delete square;
	delete circleInSquare;
}