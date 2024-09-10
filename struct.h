#include "lib.h"

enum class LivingBeingType
{
	HUMAN,
	BIRD,
	CATTLE,
	UNDEFINED
};

template <typename T>
struct LivingBeing {
private:
	double speed;
	LivingBeingType type;
	string Color;
	T* stat;


public:
	LivingBeing()
	{
		this->speed = 0;
		this->type = LivingBeingType::UNDEFINED;
		this->Color = "Undefined";
		this->stat = nullptr;
	}
	LivingBeing(int speed) : LivingBeing()
	{
		this->setSpeed(speed);
	}
	LivingBeing(int id, string name) : LivingBeing(id)
	{
		this->setName(name);
	}

	//setters
	void setSpeed(double speed)
	{
		this->speed = speed;
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
	~LivingBeing()
	{
		delete this->id;
	}


};