#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
    int numerator1, determinator1, numerator2, determinator2;

    cout << "Введите числитель дроби 1: ";
    cin >> numerator1;
    cout << "Введите знаменатель дроби 1: ";
    cin >> determinator1;


    cout << "Введите числитель дроби 2: ";
    cin >> numerator2;
    cout << "Введите знаменатель дроби 2: ";
    cin >> determinator2;

   Fraction f1(numerator1, determinator1);
   Fraction f2(numerator2, determinator2);

   Fraction sum = f1 + f2;
   Fraction residual = f1 - f2;
   Fraction multiplication = f1 * f2;
   Fraction division = f1 / f2;
   Fraction dec_multi = ++f1 * f2;
   Fraction expression_some = f1-- * f2;
   Fraction expression_some1 = f1++ / f2;
   Fraction expression_some2 = --f1 * f2;


    cout << "\n" << f1 << " + " << f2 << " = " << sum << "\n";
    cout << f1 << " - " << f2 << " = " << residual << "\n";
    cout << f1 << " * " << f2 << " = " << multiplication << "\n";
    cout << f1 << " / " << f2 << " = " << division << "\n";
    cout << "++" << f1 << " * " << f2 << " = " << dec_multi << "\n\n";
    ++f1;
    cout << "Значение дроби 1 = " << f1 << "\n";
    cout << f1 << "-- " << " * " << f2 << " = " << expression_some << "\n";
    f1--;
    cout << "Значение дроби 1 = " << f1 << "\n";
    cout << f1 << "++ " << " / " << f2 << " = " << expression_some1 << "\n";
    f1++;
    cout << "Значение дроби 1 = " << f1 << "\n";
    cout << "--" << f1 << " * " << f2 << " = " << expression_some2 << "\n";
    --f1;
    cout << "Значение дроби 1 = " << f1 << "\n";
    return 0;
}