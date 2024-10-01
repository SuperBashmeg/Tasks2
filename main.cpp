#include "lib.h"

class Engine
{
protected:
	int power;
	int maxSpeed;
	int weight;
public:
	Engine()
	{
		power = 0;
		maxSpeed = 0;
		weight = 0;
		cout << "Engine constructor" << endl;
	}
	Engine(int power, int maxSpeed, int weight)
	{
		this->power = power;
		this->maxSpeed = maxSpeed;
		this->weight = weight;
		cout << "Engine constructor with value" << endl;
	}

	virtual void get_value()
	{
		cout << "Power of engine from Engine: " << power << " ; MaxSpeed of the engine from Engine: " << maxSpeed << "Weight of the engine from the Engine: " << weight << endl;
	}

	virtual ~Engine()
	{
		cout << "Engine destructor" << endl;
	}
};


class Wheel
{
protected:
	int radius;
public:
	Wheel()
	{
		radius = 1;
		cout << "Wheel constructor" << endl;
	}
	Wheel(int radius)
	{
		this->radius = radius;
		cout << "Wheel constructor with radius" << endl;
	}
	virtual void get_value()
	{
		cout << "radius from Wheel: " << radius << endl;
	}
	virtual ~Wheel()
	{
		cout << "Wheel destructor" << endl;
	}
};

class Door
{
protected:
	int height;
	int width;
public:
	Door()
	{
		height = 2;
		width = 1;
		cout << "Door constructor" << endl;
	}
	Door(int height, int width)
	{
		this->height = height;
		this->width = width;
		cout << "Door constructor with height and width" << endl;
	}

	virtual void get_value()
	{
		cout << "dimensions from Door: height = " << height << "; width = " << width << endl;
	}
	virtual ~Door()
	{
		cout << "Door destructor" << endl;
	}
};

class Seat
{
protected:
	string material;
public:
	Seat()
	{
		material = "leather";
		cout << "Seat constructor" << endl;
	}
	Seat(string material)
	{
		this->material = material;
		cout << "Seat constructor with material" << endl;
	}

	virtual void get_value()
	{
		cout << "Material of the seat" << material << endl;
	}
	virtual ~Seat()
	{
		cout << "Seat destructor" << endl;
	}
};


class Car : public Engine, public Wheel, public Door, public Seat
{
protected:
	int amountOfWheels;
	int amountOfDoors;
	int amountOfSeats;
public:
	Car()
	{
		cout << "CircleInSquare constructor" << endl;
		amountOfWheels = 4;
		amountOfDoors = 4;
		amountOfSeats = 5;

	}
	Car(int power, int maxSpeed, int weight, int radius, int height, int width, string material, int amountOfWheels, int amountOfDoors, int amountOfSeats) : Engine(power, maxSpeed, weight), Wheel(radius), Door(height, width), Seat(material)
	{
		cout << "CircleInSquare constructor with value" << endl;
		this->amountOfWheels = amountOfWheels;
		this->amountOfDoors = amountOfDoors;
		this->amountOfSeats = amountOfSeats;
	}
	void get_value() override
	{
		cout << "Amount of wheels: " << amountOfWheels << "; Amount of doors: " << amountOfDoors << "; Amount of seats: " << amountOfSeats << endl;
		cout << "Power of engine from Car: " << power << " ; MaxSpeed of the engine from Car: " << maxSpeed << "Weight of the engine from the Car: " << weight << endl;
		cout << "radius from Car: " << radius << endl;
		cout << "dimensions from Car: height = " << height << "; width = " << width << endl;
		cout << "Material of the seat from Car: " << material << endl;

	}
	virtual ~Car()
	{
		cout << "Car destructor" << endl;
	}
};


int main() {
	Engine engine(100, 200, 300);
	Wheel wheel(10);
	Door door(5, 3);
	Seat seat("leather");
	Car car(200, 300, 400, 15, 7, 5, "silk", 10, 10, 10);
	cout << endl;
	cout << endl;
	engine.get_value();
	cout << endl;
	wheel.get_value();
	cout << endl;
	door.get_value();
	cout << endl;
	seat.get_value();
	cout << endl;
	car.get_value();
	cout << endl;
	return 0;

}