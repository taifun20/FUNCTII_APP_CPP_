#pragma once
#include <iostream>

//Functie ce face suma intre 2 variabile
int CE_Suma_(int intA, int intB);

//Functie ce returneaza cel mai mare numar dintre A sau B 
int CE_Get_Greater_Number_(int intA, int intB);

//Functie ce returneaza conversia de la Minute la Secunde
int CE_Get_Seconds_(int intMinutes);

//Functie ce returneaza restul impartirii a 2 numere
int CE_Get_Rest_(int intNumberA, int intNumberB);

//Functie care face conversia dintre Grade Celsius in Grade Fahrenheit
float CE_CONVERSIE_(float GradeCelsius);

//Functie ce schimba culoarea textului
void CE_SET_COLOR_(int ColorIndex);

//Functie care preia datele de la utilizator pentru a face o conversie
//dintre Grade Celsius in Grade Fahrenheit 
void CE_Function_Grade_Conversie();
