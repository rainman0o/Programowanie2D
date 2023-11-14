#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

//Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10

void task1()
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << ", ";
	}

}

//Program obliczający sumę liczb od 1 do 100

void task2()
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	
	cout << "suma liczb o 1 do 100 wynosi: " << sum;
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task3() 
{
	for (int i = 0; i <= 10; i++)
	{
		cout << pow(i, 2) << ", ";	
	}
}

//Program obliczający n!.

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

//*Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)

void task5()
{
	double strong = 1;

	for (int i = 1; i <=10; i++)
	{
		strong *= i;
		cout <<"silnia z "<< i << ": " << strong << ", ";
	}
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).

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

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task7()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0) {
			cout << i << ", ";
		}
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10

void task8()
{
	int sum = 0;

	for (int i = 0; i <= 10; i++)
	{
		sum += i * i;
	}
	
	cout << "suma kwadratów od 1 - 10 wynosi : " << sum;
}

//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

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

//rogram, kóry wyświetli poniższe cztery zwory :
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
		for (int j = 0; j < 6; j++)
		{
			cout << (j + i) % 2 + 1;
		}
		cout << "\n";
	}

	cout << "\n" << "wzór 4: \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j <= i + 3; j++)
		{
			for (int k = 0; k < j; k++)
			{
				cout << j;
			}
		}
		cout << "\n";
	}

}


//*Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz, 
// to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).Zwróć uwagę, 
// że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
void task11()
{
	double sum = 0;
	double i = 1;
	int numberFromUser;

	cout << "Podaj liczbe do szeregu";
	cin >> numberFromUser;

	while (numberFromUser > i)
	{
		sum = sum + 1 / (i * i);
		i++;
	}

	std::cout << "Suma " << sum << "\n";

}

//WHILE
//* Miasto T.ma obecnie 100 tys.mieszkańców, 
// ale jego populacja rośnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkańców i ta liczba rośnie w tempie 2 % na rok
// .Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, gdy liczba mieszkańców miasta T.
// przekroczy liczbę z miasta B.

void task12()
{

	int CityT = 100000;
	int CityB = 300000;
	int year = 0;

	while (CityT < CityB)
	{
		CityT *= 1.03;
		CityB *= 1.02;
		year = year + 1;

	}

	cout << "Populacje Miasta T przsekroczy populacje miasta B po: " << year << "latach";
}

//Napisz program,
//  który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
void task13()
{
	int number;

	cout << "Podaj liczbe do sprawdzenia: ";
	cin >> number;
	
	int howManyDigits = 1;
	int upperRange = 10;

	number = abs(number);

	while (number > upperRange)
	{
		howManyDigits++;
		upperRange *= 10;
	}

	cout<< "Podana liczba zawiera: " << howManyDigits <<"cyfr" << "\n";

}

//*Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką,
//której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie,
//np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task14()
{
	int numberFromUser;
	int sum = 0;

	cout << "Podaj liczbe do sprawdzenia: ";
	cin >> numberFromUser;

	int i = 1;
	while ( i < numberFromUser)
	{
		if (numberFromUser % i == 0)
		{
			cout << i << ", " ;
			sum = sum + i;
		}
		i++;
	}

	cout << "\n" << "suma dzielników podanej liczby wynosi:" << sum << "\n";

	if (sum == numberFromUser)
	{
		cout << "liczba jest doskonała";
	}
	else
	{
		cout << "liczba jest niedoskonała";
	}
}

//*Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task15()
{
	int numberFromUser;
	int sumOfDigits = 0;

	cout << "podaj liczbe do sprawdzenia: ";
	cin >> numberFromUser;

	do
	{
		int digitFromNumber = numberFromUser % 10;
		numberFromUser /= 10;
		
		sumOfDigits = sumOfDigits + digitFromNumber;

	} while (numberFromUser > 0);

	cout << "suma cyfr podanej przez użytkownika liczby wynosi: " <<  sumOfDigits;
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
void task16()
{
	int number = 1;
	int sum = 0;

	do
	{
		if (number > 10)
		{
			number = 1;
		}

		sum = sum + pow(number, 2);
		cout << pow(number, 2) << ", ";
		number++;

	} while (sum  < 1000);

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
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
}

