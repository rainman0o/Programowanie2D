#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

//Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10

void task1()
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << ", ";
	}

}

//Program obliczaj¹cy sumê liczb od 1 do 100

void task2()
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	
	cout << "suma liczb o 1 do 100 wynosi: " << sum;
}

//Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task3() 
{
	for (int i = 0; i <= 10; i++)
	{
		cout << pow(i, 2) << ", ";	
	}
}

//Program obliczaj¹cy n!.

void task4()
{
	int numberFromUser;
	double strong = 1;

	cout << "podaj liczbe do obliczenia silni: ";
	cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		 strong *= i;
	}

	cout << "silnia wynosi: " << strong;
}

//*Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)

void task5()
{
	double strong = 1;

	for (int i = 1; i <=10; i++)
	{
		strong *= i;
		cout <<"silnia z "<< i << ": " << strong << ", ";
	}
}

//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).

void task6()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "x" << j << " = " << i * j << "\n";
		}
	}

}

//Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task7()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0) {
			cout << i << ", ";
		}
	}
}

//Program obliczaj¹cy sumê kwadratów liczb od 1 do 10

void task8()
{
	int sum = 0;

	for (int i = 0; i <= 10; i++)
	{
		sum += i * i;
	}
	
	cout << "suma kwadratów od 1 - 10 wynosi : " << sum;
}

//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu(ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

void task9()
{
	cout << "0 ,1, ";

	int fib2 = 0;
	int fib1 = 1;

	for (int i = 0; i < 18; i++)
	{
		int fib = fib2 + fib1;
		cout << fib << ", ";
		fib2 = fib1;
		fib1 = fib;
	}
}

//rogram, kóry wyœwietli poni¿sze cztery zwory :
//**** 54321        121212        122333
//***  65432        212121        223334444
//**   76543        121212        333444455555
//*    87654        212121        444455555666666

void task10()
{
	cout << "wzrór 1: \n"; 

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i  ; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "wzór 2:\n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 5 ; j >= 1; j--)
		{
			cout << j + i ;
		}
		cout << endl;
	}

	cout << "\n" << "wzór 3: \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "x";
		}
		cout << "\n";
	}

}

int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	task10();
}

