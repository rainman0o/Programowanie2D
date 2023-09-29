#include <iostream>

using namespace std;

//Napisz funkcje, która podzieli dwie liczby.

void task1()
{
	double firstNumber, secondNumber;

	cout << "Podaj pierwsz¹ liczbê: \n";
	cin >> firstNumber;

	cout << "Podaj drug¹ liczbê: \n";
	cin >> secondNumber;

	double quotient = firstNumber / secondNumber;

	cout << "wynik dzielenia wynosi: " << quotient << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}

