#include <iostream>

using namespace std;

//Napisz funkcje, kt�ra podzieli dwie liczby.

void task1()
{
	double firstNumber, secondNumber;

	cout << "Podaj pierwsz� liczb�: \n";
	cin >> firstNumber;

	cout << "Podaj drug� liczb�: \n";
	cin >> secondNumber;

	double quotient = firstNumber / secondNumber;

	cout << "wynik dzielenia wynosi: " << quotient << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}

