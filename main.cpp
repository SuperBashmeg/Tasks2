#include "lib.h"

class Fraction
{
	int _numerator;
	int _denominator;
public:
	Fraction() {
		_numerator = 0;
		_denominator = 1;
	}
	Fraction(int full, int numerator, int denominator) : Fraction()
	{
		_numerator = numerator + full*denominator;
		_denominator = denominator;
	}
	Fraction(int numerator, int denominator) : Fraction()
	{
		_numerator = numerator;
		_denominator = denominator;
	}

	void setNumerator(int numerator) { _numerator = numerator; }
	void setDenominator(int denominator) { _denominator = denominator; }

	int getNumerator() { return _numerator; }
	int getDenominator() { return _denominator; }

	void reduce() {
		int gcd = 1;
		int smaller = _numerator < _denominator ? _numerator : _denominator;
		for (int i = 1; i <= smaller; i++) {
			if (_numerator % i == 0 && _denominator % i == 0) {
				gcd = i;
			}
		}
		_numerator /= gcd;
		_denominator /= gcd;
	}
	void print()
	{
		if (_numerator != 0) {
			cout << _numerator << "/" << _denominator;
		}
		cout << endl;
	}
	void printDecimal()
	{
		cout << double(_numerator) / double(_denominator) << endl;
	}
	void printWrongFraction()
	{
		int full = _numerator / _denominator;
		int realNumerator = _numerator % _denominator;
		cout << full << " " << realNumerator << "/" << _denominator << endl;
	}
};

int GetSmallestCommonDenominator(int a, int b)
{
	int result = a;
	while (result % b != 0)
	{
		result += a;
	}
	return result;
}

Fraction Add(Fraction f1, Fraction f2)
{
	Fraction result;
	int smallestCommonDenominator = GetSmallestCommonDenominator(f1.getDenominator(), f2.getDenominator());
	int f1Numerator = f1.getNumerator() * (smallestCommonDenominator / f1.getDenominator());
	int f2Numerator = f2.getNumerator() * (smallestCommonDenominator / f2.getDenominator());
	result.setNumerator(f1Numerator + f2Numerator);
	result.setDenominator(smallestCommonDenominator);
	result.reduce();
	return result;
}

Fraction Subtract(Fraction f1, Fraction f2)
{
	Fraction result;
	int smallestCommonDenominator = GetSmallestCommonDenominator(f1.getDenominator(), f2.getDenominator());
	int f1Numerator = f1.getNumerator() * (smallestCommonDenominator / f1.getDenominator());
	int f2Numerator = f2.getNumerator() * (smallestCommonDenominator / f2.getDenominator());
	result.setNumerator(f1Numerator - f2Numerator);
	result.setDenominator(smallestCommonDenominator);
	result.reduce();
	return result;
}

Fraction Multiply(Fraction f1, Fraction f2)
{
	Fraction result;
	result.setNumerator(f1.getNumerator() * f2.getNumerator());
	result.setDenominator(f1.getDenominator() * f2.getDenominator());
	result.reduce();
	return result;
}

Fraction Divide(Fraction f1, Fraction f2)
{
	Fraction result;
	Fraction f2Inverse(f2.getDenominator(), f2.getNumerator());
	result.setNumerator(f1.getNumerator() * f2Inverse.getNumerator());
	result.setDenominator(f1.getDenominator() * f2Inverse.getDenominator());
	result.reduce();
	return result;
}

int main()
{
	Fraction f1(1, 2, 5);
	f1.print();
	f1.printDecimal();
	f1.printWrongFraction();
	cout << endl;
	Fraction f2(1, 3, 5);
	f2.print();
	f2.printDecimal();
	f2.printWrongFraction();
	cout << endl;
	Fraction f3 = Add(f1, f2);
	f3.print();
	f3.printDecimal();
	f3.printWrongFraction();
	cout << endl;
	Fraction f4 = Subtract(f1, f2);
	f4.print();
	f4.printDecimal();
	f4.printWrongFraction();
	cout << endl;
	Fraction f5 = Multiply(f1, f2);
	f5.print();
	f5.printDecimal();
	f5.printWrongFraction();
	cout << endl;
	Fraction f6 = Divide(f1, f2);
	f6.print();
	f6.printDecimal();
	f6.printWrongFraction();
	cout << endl;
	return 0;
}