
#include "complex.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

bool complex::init(double cal, double kg)
{
    if (cal > 0 && kg > 0)
    {
        calories = cal;
        kilograms = kg;
        return true;
    }
    else
    {
        cout << "Числа відємні, спробуй ще раз" << endl;
        return false;
    }
}

void complex::Read()
{
    double cal, kg;
    do
    {
        cout << "Введи калорійність(на 100 грам): " << endl;
        cin >> cal;
        cout << endl;
        cout << "Введи вагу(кг): " << endl;
        cin >> kg;
        cout << endl;
    } while (!init(cal, kg));
}

double complex::Calc()
{
    CalorieCount = kilograms * (calories * 10);
    return CalorieCount;
}

void complex::Display()
{
    cout << "Калорійність: " << to_string(calories) << endl;
    cout << "Вага: " << to_string(kilograms) << endl;
    cout << "Кількість калорій: " << to_string(Calc()) << endl;
}