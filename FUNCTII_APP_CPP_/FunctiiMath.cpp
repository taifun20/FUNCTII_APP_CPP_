#include "FunctiiMath.h"


int CE_Suma_(int intA, int intB)
{
	return intA + intB;
}

int CE_Get_Greater_Number_(int intA,int intB)
{
	if (intA > intB) {
		return intA;
	} else if (intA < intB) {
		return intB;
	}
}

int CE_Get_Seconds_(int intMinutes)
{
	return intMinutes * 60;
}

int CE_Get_Rest_(int intNumberA, int intNumberB)
{
	return intNumberA % intNumberB;
}

float CE_CONVERSIE_(float GradeCelsius)
{
	float localGradeFahrenheit = 0.0;

	localGradeFahrenheit = (GradeCelsius * 1.8) + 32.0;

	return localGradeFahrenheit;
}

void CE_SET_COLOR_(int ColorIndex)
{
	std::cout << "\033[" << ColorIndex << "m";


	/*
	* 
	Cateva exemple:

	std::cout << "\033[0m\t\t";
	std::cout << "\033[31mTexting";
	std::cout << "\033[3;42;30mTexting\033[0m\t\t";
	std::cout << "\033[3;43;30mTexting\033[0m\t\t";
	std::cout << "\033[3;44;30mTexting\033[0m\t\t";
	std::cout << "\033[3;104;30mTexting\033[0m\t\t";
	std::cout << "\033[3;100;30mTexting\033[0m\n";

	std::cout << "\033[3;47;35mTexting\033[0m\t\t";
	std::cout << "\033[2;47;35mTexting\033[0m\t\t";
	std::cout << "\033[1;47;35mTexting\033[0m\t\t";
	std::cout << "\033[2J\033[H";
	https://en.wikipedia.org/wiki/ANSI_escape_code

		ANSI escape color codes :
		Name            FG  BG
		Black           30  40
		Red             31  41
		Green           32  42
		Yellow          33  43
		Blue            34  44
		Magenta         35  45
		Cyan            36  46
		White           37  47
		Bright Black    90  100
		Bright Red      91  101
		Bright Green    92  102
		Bright Yellow   93  103
		Bright Blue     94  104
		Bright Magenta  95  105
		Bright Cyan     96  106
		Bright White    97  107
	*/
}

void CE_Function_Grade_Conversie()
{
	float GradeCelsius = 0.0, GradeFahrenheit = 0.0;

	CE_SET_COLOR_(90);

	std::cout << "	Cate Grade Celsius sunt acum ?" << std::endl;
	std::cin >> GradeCelsius;

	std::cout << "	Ati introdus "; CE_SET_COLOR_(32);
	std::cout << GradeCelsius;		CE_SET_COLOR_(90);
	std::cout << " Grade Celsius" << std::endl;


	std::cout << std::endl;

	GradeFahrenheit = CE_CONVERSIE_(GradeCelsius);

	std::cout << "	Acum sunt ";	CE_SET_COLOR_(32);
	std::cout << GradeFahrenheit;	CE_SET_COLOR_(90);
	std::cout << " Grade Fahrenheit" << std::endl;

	CE_SET_COLOR_(0);

	std::cout << std::endl;
}