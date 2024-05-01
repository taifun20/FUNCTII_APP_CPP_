
#include <iostream>
#include <string>
#include "FunctiiMath.h"

int main()
{
															CE_SET_COLOR_(36);
	std::cout << "	Suma lui 8 cu 4 va avea rezultatul: ";	CE_SET_COLOR_(93);
	std::cout << CE_Suma_(8, 4);							CE_SET_COLOR_(36);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "	Cine este mai mare 12 sau 422 ? Rezultatul este: ";	CE_SET_COLOR_(93);
	std::cout << CE_Get_Greater_Number_(12, 422);						CE_SET_COLOR_(36);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "	Sa zicem ca din greseala avem cele 2 numere egale =], o sa avem: ";	CE_SET_COLOR_(93);
	std::cout << CE_Get_Greater_Number_(55, 55);										CE_SET_COLOR_(36);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "	Mai sunt 14 minute pana la pauza asta inseamna ca mai avem ";		CE_SET_COLOR_(93);
	std::cout << CE_Get_Seconds_(14);													CE_SET_COLOR_(36);
	std::cout << " de secunde" << std::endl;
	std::cout << std::endl;

	std::cout << "	Impartirea lui 5 la 2 va avea restul: ";	CE_SET_COLOR_(93);
	std::cout << CE_Get_Rest_(5, 2);							CE_SET_COLOR_(0);
	std::cout << std::endl;
	std::cout << std::endl;

	CE_Function_Grade_Conversie();
	
}

	/*
	 
	Tema :
	
	O functie ce sa returneze cel mai mare numar din 2 parametrii

	O functie ce face conversia de la minute la secunde

	O functie ce sa returneze restul impartirii a 2 numere
	
	*/