#include "Fraction.h"

int Fraction::GCD(int a, int b) 
{
    return b ? GCD(b, a % b) : a;
};

int Fraction::LCM(int a, int b) 
{
    return a / GCD(a, b) * b;
};


Fraction::Fraction(int a, int b) 
{
    numerator = a; determinator = b;
    if ((i = GCD(numerator, determinator)) != 1) 
    {
        numerator /= i;
        determinator /= i;
    }
};

int Fraction::converting_Fraction(Fraction& other) 
{
    return LCM(determinator, other.determinator);
};

Fraction Fraction::operator+(Fraction& other) 
{
    return Fraction((numerator * converting_Fraction(other) / determinator + other.numerator * converting_Fraction(other) / other.determinator), converting_Fraction(other));
}

Fraction Fraction::operator-(Fraction& other) 
{
    return Fraction((numerator * converting_Fraction(other) / determinator - other.numerator * converting_Fraction(other) / other.determinator), converting_Fraction(other));
};

Fraction Fraction::operator*(Fraction& other) 
{
    return Fraction(numerator * other.numerator, determinator * other.determinator);
};

Fraction Fraction::operator/(Fraction& other) 
{
    return Fraction(numerator * other.determinator, determinator * other.numerator);
};

Fraction Fraction::operator++() 
{
    numerator += determinator;  return *this;
};

Fraction Fraction::operator--() 
{
    numerator -= determinator;  return *this;
};

Fraction Fraction::operator--(int) 
{
    Fraction c = *this;
    --(*this);
    return c;
};

Fraction  Fraction::operator++(int) 
{
    Fraction c = *this;
    ++(*this);
    return c;
};

int Fraction::get_numerator() { return numerator; };
int  Fraction::get_determinator() { return determinator; };

std::ostream& operator<<(std::ostream& stream, Fraction& other) {
    stream << other.get_numerator();
    stream << "/";
    stream << other.get_determinator();
    return stream;
}