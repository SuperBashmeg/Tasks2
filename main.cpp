#include "lib.h"

class Base {
protected:
	int value1;
	double value2;
public:
	Base() {
		cout << "Base constructor" << endl;
		value1 = 0;
		value2 = 0.0;
	}
	Base(int value1) : Base() {
		cout << "Base constructor with value" << endl;
		this->value1 = value1;
	}
	Base(int value1, double value2) : Base(value1) {
		cout << "Base constructor with 2 value" << endl;
		this->value2 = value2;
	}
	
	void Sum() {
		cout << "Sum from Base: " << value1 + value2 << endl;
	}
	void average() {
		cout << "Average from Base: " << (value1 + value2) / 2 << endl;
	}

	virtual void get_value() {
		cout << "Value from Base: " << value1 << " " << value2 << endl;
	}

	virtual ~Base() {
		cout << "Base destructor" << endl;
	}
};

class Child : public Base {
protected:
	int value3;
	int value4;
public:
	Child() {
		cout << "Child constructor" << endl;
		value3 = 0;
		value4 = 0;
	}
	Child(int value1) : Base(value1) {
		cout << "Child constructor with value" << endl;
		value3 = 0;
		value4 = 0;
	}
	Child(int value1, double value2) : Base(value1, value2) {
		cout << "Child constructor with 2 value" << endl;
		value3 = 0;
		value4 = 0;
	}
	Child(int value1, double value2, int value3) : Base(value1, value2) {
		cout << "Child constructor with 3 value" << endl;
		this->value3 = value3;
		value4 = 0;
	}
	Child(int value1, double value2, int value3, int value4) : Child(value1, value2, value3) {
		cout << "Child constructor with 4 value" << endl;
		this->value4 = value4;
	}

	void Sum() {
		cout << "Sum from Child: " << value1 + value2 + value3 + value4 << endl;
	}
	void average() {
		cout << "Average from Child: " << (value1 + value2 + value3 + value4) / 4 << endl;
	}

	virtual void get_value() {
		cout << "Value from Child: " << value1 << " " << value2 << " " << value3 << " " << value4 << endl;
	}

	virtual ~Child() {
		cout << "Child destructor" << endl;
	}
};

class Child2 : public Child {
protected:
	int value5;
	int value6;
public:
	Child2() {
		cout << "Child2 constructor" << endl;
		value5 = 0;
		value6 = 0;
	}
	Child2(int value1) : Child(value1) {
		cout << "Child2 constructor with value" << endl;
		value5 = 0;
		value6 = 0;
	}
	Child2(int value1, double value2) : Child(value1, value2) {
		cout << "Child2 constructor with 2 value" << endl;
		value5 = 0;
		value6 = 0;
	}
	Child2(int value1, double value2, int value3) : Child(value1, value2, value3) {
		cout << "Child2 constructor with 3 value" << endl;
		value5 = 0;
		value6 = 0;
	}
	Child2(int value1, double value2, int value3, int value4) : Child(value1, value2, value3, value4) {
		cout << "Child2 constructor with 4 value" << endl;
		value5 = 0;
		value6 = 0;
	}
	Child2(int value1, double value2, int value3, int value4, int value5) : Child(value1, value2, value3, value4) {
		cout << "Child2 constructor with 5 value" << endl;
		this->value5 = value5;
		value6 = 0;
	}
	Child2(int value1, double value2, int value3, int value4, int value5, int value6) : Child2(value1, value2, value3, value4, value5) {
		cout << "Child2 constructor with 6 value" << endl;
		this->value6 = value6;
	}

	void Sum() {
		cout << "Sum from Child2: " << value1 + value2 + value3 + value4 + value5 + value6 << endl;
	}
	void average() {
		cout << "Average from Child2: " << (value1 + value2 + value3 + value4 + value5 + value6) / 6 << endl;
	}

	virtual void get_value() {
		cout << "Value from Child2: " << value1 << " " << value2 << " " << value3 << " " << value4 << " " << value5 << " " << value6 << endl;
	}

	virtual ~Child2() {
		cout << "Child2 destructor" << endl;
	}
};

int main()
{
	Base b = Base(1, 2.0);
	Child c = Child(2, 0.5, 1, 5);
	Child2 c2 = Child2(3, 0.3, 2, 4, 6, 8);
	cout << endl;
	b.get_value();
	b.Sum();
	b.average();
	cout << endl;
	c.get_value();
	c.Sum();
	c.average();
	cout << endl;
	c2.get_value();
	c2.Sum();
	c2.average();
	cout << endl;



	return 0;
}