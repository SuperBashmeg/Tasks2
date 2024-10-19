#include "lib.h"


namespace position
{
	class Vector1
	{
	private:
		int _x;
	public:
		Vector1() 
		{
			_x = 0;
		}
		Vector1(int x) 
		{
			_x = x;
		}
		int GetVector()
		{
			return _x;
		}
		void SetVector(int x)
		{
			_x = x;
		}
		void MoveVector(int x)
		{
			_x += x;
		}
		void print()
		{
			cout << "Vector 1: " << _x << endl;
		}
	};
	class Vector2
	{
	private: 
		int _x;
		int _y;
	public:
		Vector2()
		{
			_x = 0;
			_y = 0;
		}
		Vector2(int x, int y)
		{
			_x = x;
			_y = y;
		}
		int GetVectorX()
		{
			return _x;
		}
		int GetVectorY()
		{
			return _y;
		}
		void SetVectorX(int x)
		{
			_x = x;
		}
		void SetVectorY(int y)
		{
			_y = y;
		}
		void MoveVectorX(int x)
		{
			_x += x;
		}
		void MoveVectorY(int y)
		{
			_y += y;
		}
		void print()
		{
			cout << "Vector 2: " << _x << " " << _y << endl;
		}
	};
	class Vector3
	{
	private:
		int _x;
		int _y;
		int _z;
	public:
		Vector3()
		{
			_x = 0;
			_y = 0;
			_z = 0;
		}
		Vector3(int x, int y, int z)
		{
			_x = x;
			_y = y;
			_z = z;
		}
		int GetVectorX()
		{
			return _x;
		}
		int GetVectorY()
		{
			return _y;
		}
		int GetVectorZ()
		{
			return _z;
		}
		void SetVectorX(int x)
		{
			_x = x;
		}
		void SetVectorY(int y)
		{
			_y = y;
		}
		void SetVectorZ(int z)
		{
			_z = z;
		}
		void MoveVectorX(int x)
		{
			_x += x;
		}
		void MoveVectorY(int y)
		{
			_y += y;
		}
		void MoveVectorZ(int z)
		{
			_z += z;
		}
		void print()
		{
			cout << "Vector 3: " << _x << " " << _y << " " << _z << endl;
		}
	};

}

int main()
{
	position::Vector1 v1 = position::Vector1(5);
	v1.print();
	v1.MoveVector(10);
	v1.print();
	cout << endl;
	position::Vector2 v2 = position::Vector2(5, 10);
	v2.print();
	v2.MoveVectorX(10);
	v2.print();
	v2.MoveVectorY(20);
	v2.print();
	cout << endl;
	position::Vector3 v3 = position::Vector3(5, 10, 15);
	v3.print();
	v3.MoveVectorX(10);
	v3.print();
	v3.MoveVectorY(20);
	v3.print();
	v3.MoveVectorZ(30);
	v3.print();

	return 0;
}