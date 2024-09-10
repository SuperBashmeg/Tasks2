#include "lib.h"

enum class Color
{
	RED,
	GREEN,
	BLUE,
	YELLOW,
	BLACK,
	WHITE,
	ORANGE,
	PURPLE,
	PINK,
	BROWN,
	UNDEFINED
};

struct Car
{
private:
	string brand;
	string model;
	Color color;

	string printEnum()
	{
		switch (this->color)
		{
		case Color::RED:
			return "Red";
		case Color::GREEN:
			return "Green";
		case Color::BLUE:
			return "Blue";
		case Color::YELLOW:
			return "Yellow";
		case Color::BLACK:
			return "Black";
		case Color::WHITE:
			return "White";
		case Color::ORANGE:
			return "Orange";
		case Color::PURPLE:
			return "Purple";
		case Color::PINK:
			return "Pink";
		case Color::BROWN:
			return "Brown";
		default:
			return "Undefined";
		}
	}

public:
	Car()
	{
		this->brand = "";
		this->model = "";
		this->color = Color::UNDEFINED;
	}
	Car(string brand) : Car()
	{
		this->brand = brand;
	}
	Car(string brand, string model) : Car(brand)
	{
		this->model = model;
	}
	Car(string brand, string model, Color color) : Car(brand, model)
	{
		this->color = color;
	}

	//Setters
	void setBrand(string brand)
	{
		this->brand = brand;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setColor(Color color)
	{
		this->color = color;
	}

	//Getters
	string getBrand()
	{
		return (this->brand.empty()) ? "Undefined brand" : this->brand;
	}
	string getModel()
	{
		return (this->model.empty()) ? "Undefined model" : this->brand;
	}
	Color getColor()
	{
		return this->color;
	}

	//Methods
	void print()
	{
		cout << "Brand: " << this->brand << endl;
		cout << "Model: " << this->model << endl;
		cout << "Color: " << this->printEnum() << endl;
	}

};