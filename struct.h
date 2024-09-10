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

struct Example
{
private:
	int* id;
	string name;

public:
	Example()
	{
		this->name = "";
		this->id = nullptr;
	}
	Example(int id) : Example()
	{
		this->setId(id);
	}
	Example(int id, string name) : Example(id)
	{
		this->setName(name);
	}

	//setters
	void setName(string name)
	{
		this->name = name;
	}
	void setId(int id)
	{
		this->id = (this->id == nullptr) ? new int(id) : &id;
	}

	//getters
	string getName()
	{
		return this->name;
	}
	int getId()
	{
		return *this->id;
	}

	//methods
	void print()
	{
		cout << "Name: " << this->name << endl;
		cout << "Id: " << *this->id << endl;
	}

	//destructor
	~Example()
	{
		delete this->id;
	}


};