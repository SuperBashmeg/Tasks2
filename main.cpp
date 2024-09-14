#include "lib.h"

class Point {
	int _x, _y, _z, _id;
public:
	Point() {
		_id = 0;
		_x = 0;
		_y = 0;
		_z = 0;
	}
	Point(int id) : Point()
	{
		_id = id;
	}
	Point(int id, int x) : Point(id)
	{
		_x = x;
	}
	Point(int id, int x, int y) : Point(id, x)
	{
		_y = y;
	}
	Point(int id, int x, int y, int z) : Point(id, x, y)
	{
		_z = z;
	}

	void setId(int id) {
		_id = id;
	}
	void setX(int x) {
		_x = x;
	}
	void setY(int y) {
		_y = y;
	}
	void setZ(int z) {
		_z = z;
	}

	int getId() {
		return _id;
	}
	int getX() {
		return _x;
	}
	int getY() {
		return _y;
	}
	int getZ() {
		return _z;
	}

	void print() {
		cout << "Point - " << _id << ", X: " << _x << ", Y: " << _y << ", Z: " << _z << endl;
	}
};

int main()
{
	Point p1(0, 10);
	Point p2(1, 20, 30);
	Point p3(2, 40, 50, 60);
	p1.print();
	p2.print();
	p3.print();


	return 0;
}