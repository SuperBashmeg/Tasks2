#include "lib.h"

class Date
{
	int Day;
	int Month;
	int Year;
public:
	Date()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}
	Date(int day, int month, int year) : Date()
	{
		Day = day;
		Month = month;
		Year = year;
	}

	void SetDay(int day)
	{
		Day = day;
	}

	int GetDay()
	{
		return Day;
	}

	void SetMonth(int month)
	{
		Month = month;
	}

	int GetMonth()
	{
		return Month;
	}

	void SetYear(int year)
	{
		Year = year;
	}

	int GetYear()
	{
		return Year;
	}
};

class PhoneNumber
{
	string CountryCode;
	string Number;
public:
	PhoneNumber()
	{
		CountryCode = "0";
		Number = "0";
	}
	PhoneNumber(string countryCode, string number) : PhoneNumber()
	{
		CountryCode = countryCode;
		Number = number;
	}

	void SetCountryCode(string countryCode)
	{
		CountryCode = countryCode;
	}

	string GetCountryCode()
	{
		return CountryCode;
	}

	void SetNumber(string number)
	{
		Number = number;
	}

	string GetNumber()
	{
		return Number;
	}
};

class Student {
	string _name;
	string _surname;
	string _patronymic;
	Date _birthDate;
	PhoneNumber _phone;
	string _city;
	string _country;
	string _school;
	string _schoolCountry;
	string _schoolCity;
	string _group;

public:
	Student()
	{
		_name = "";
		_surname = "";
		_patronymic = "";
		_birthDate = Date();
		_phone = PhoneNumber();
		_city = "";
		_country = "";
		_school = "";
		_schoolCountry = "";
		_schoolCity = "";
		_group = "";
	}
	Student(string name, string surname, string patronymic, Date birthDate, PhoneNumber phone, string city, string country, string school, string schoolCountry, string schoolCity, string group) : Student()
	{
		_name = name;
		_surname = surname;
		_patronymic = patronymic;
		_birthDate = birthDate;
		_phone = phone;
		_city = city;
		_country = country;
		_school = school;
		_schoolCountry = schoolCountry;
		_schoolCity = schoolCity;
		_group = group;
	}

	void SetName(string name)
	{
		_name = name;
	}

	string GetName()
	{
		return _name;
	}

	void SetSurname(string surname)
	{
		_surname = surname;
	}

	string GetSurname()
	{
		return _surname;
	}

	void SetPatronymic(string patronymic)
	{
		_patronymic = patronymic;
	}

	string GetPatronymic()
	{
		return _patronymic;
	}

	void SetBirthDate(Date birthDate)
	{
		_birthDate = birthDate;
	}

	Date GetBirthDate()
	{
		return _birthDate;
	}

	void SetPhone(PhoneNumber phone)
	{
		_phone = phone;
	}

	PhoneNumber GetPhone()
	{
		return _phone;
	}

	void SetCity(string city)
	{
		_city = city;
	}

	string GetCity()
	{
		return _city;
	}

	void SetCountry(string country)
	{
		_country = country;
	}

	string GetCountry()
	{
		return _country;
	}

	void SetSchool(string school)
	{
		_school = school;
	}

	string GetSchool()
	{
		return _school;
	}

	void SetSchoolCountry(string schoolCountry)
	{
		_schoolCountry = schoolCountry;
	}

	string GetSchoolCountry()
	{
		return _schoolCountry;
	}

	void SetSchoolCity(string schoolCity)
	{
		_schoolCity = schoolCity;
	}

	string GetSchoolCity()
	{
		return _schoolCity;
	}

	void SetGroup(string group)
	{
		_group = group;
	}

	string GetGroup()
	{
		return _group;
	}

	void Show()
	{
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Patronymic: " << _patronymic << endl;
		cout << "Birth date: " << _birthDate.GetDay() << "." << _birthDate.GetMonth() << "." << _birthDate.GetYear() << endl;
		cout << "Phone: " << _phone.GetCountryCode() << " " << _phone.GetNumber() << endl;
		cout << "City: " << _city << endl;
		cout << "Country: " << _country << endl;
		cout << "School: " << _school << endl;
		cout << "School country: " << _schoolCountry << endl;
		cout << "School city: " << _schoolCity << endl;
		cout << "Group: " << _group << endl;
	}

};

int main()
{
	Student Matyas("Sebastian", "AABAAA", "Secret", Date(27, 5, 2003), PhoneNumber("+380", "724232353"), "Vinnitsia", "Ukraine", "IT-Step", "Ukraine", "Vinnitsia", "P34");
	Matyas.Show();
	return 0;
}