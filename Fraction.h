#pragma once
#include <iostream>

class Fraction {
private:
	int numerator{}, determinator{}, i;

	int GCD(int a, int b);

	int LCM(int a, int b);

public:
	Fraction(int a, int b);

	int converting_Fraction(Fraction& other);

	Fraction operator+(Fraction& other);

	Fraction operator-(Fraction& other);

	Fraction operator*(Fraction& other);

	Fraction operator/(Fraction& other);

	Fraction operator++();

	Fraction operator++(int);

	Fraction operator--();

	Fraction operator--(int);

	int get_numerator();
	int  get_determinator();
};

std::ostream& operator<<(std::ostream& stream, Fraction& other);

