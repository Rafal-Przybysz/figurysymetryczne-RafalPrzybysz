#include "figurySymetryczne.h"

Prostokat::Prostokat(int a, int b): FiguraSymetryczna(a, b) {}

double Prostokat::pole() const
{
	int w;
	w = a * b;
	return w;
}
double Prostokat::obwod() const
{
	int w;
	w = 2 * a + 2 * b;
	return w;
}
string Prostokat::nazwa() const
{
	string w = "Prostokat";
	return w;
}
// ZROBIONE Uzupe³niæ definicjê klasy Prostokat

Trojkat::Trojkat(int a, int b): FiguraSymetryczna(a, b) {}

double Trojkat::pole() const
{
	int w;
	w = a * b / 2;
	return w;
}

double Trojkat::obwod() const
{
	double w;
	w = 2 * sqrt(a/2 * a/2 + b * b)+a;
	return w;
}

string Trojkat::nazwa() const
{
	string w;
	w = "Trojkat";
	return w;
}

// ZROBIONE Uzupe³niæ definicjê klasy Trojkat
