#pragma once
struct complex
{
	double calories;
	double kilograms;
	double CalorieCount;

	bool init(double calories, double kilograms);
	void Read();
	void Display();
	double Calc();
};
