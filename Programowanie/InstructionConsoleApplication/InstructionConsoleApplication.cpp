#include <iostream>

using namespace std;

//Napisz funkcje, która podzieli dwie liczby.

void test()
{
	double firstNumber, secondNumber;

	cout << "Podaj pierwsz¹ liczbê: \n";
	cin >> firstNumber;

	cout << "Podaj drug¹ liczbê: \n";
	cin >> secondNumber;

	double quotient = firstNumber / secondNumber;

	cout << "wynik dzielenia wynosi: " << quotient << "\n";
}

//Program sprawdzajacy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
	int firstNumber;
	int secoundNumber;

	cout << "Podaj pierwsz¹ liczbê: \n";
	cin >> firstNumber;

	cout << "Podaj drug¹ liczbê: \n";
	cin >> secoundNumber;

	if (firstNumber % 2 == 1)
	{
		cout << "liczba jest nieparzysta\n";
	}
	else
	{
		cout << "liczba jest parzysta\n";
	}
}

//Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
void task2()
{
	double numberFromUser;

	cout << "Podaj liczbê do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser > 0)
	{
		cout << "liczba jest dodatnia\n";
	}
	else if (numberFromUser == 0) 
	{
		cout << "liczba jest równa zero\n";
	}
	else if (numberFromUser < 0)
	{
		cout << "liczba jest ujemna";
	}
}

//Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
void task3()
{

	int year;

	cout << "podaj rok do sprawdzenia\n";
	cin >> year;

	if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0 )
	{
		cout << "rok jest przestêpny \n ";
	}
	else
	{
		cout << "rok jest nieprzystêpny";
	}

}

//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny
// (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)

void task4()
{
	int grade;
	
	cout << "podaj ocene: ";
	cin >> grade;

	if (grade == 1)
	{
		cout << "ocenia niedostateczna\n";
	}
	else if (grade == 2)
	{
		cout << "ocena dopuszczj¹ca\n";
	}
	else if (grade == 3)
	{
		cout << "ocenia dostateczna\n";
	}
	else if (grade == 4)
	{
		cout << "ocena dobra\n";
	}
	else if (grade == 5)
	{
		cout << "ocena bardzo dobra\n";
	}
	else if (grade == 6)
	{
		cout << "ocena celuj¹ca\n";
	}
	else 
	{
		cout << "nie ma takiej oceny";
	}
}

// Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123",
//  program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task5()
{
	string  password;
	
	cout << "Podaj has³o: \n";
	cin >> password;

	if (password == "abc123")
	{
		cout << "has³o poprawne";
	}
	else
	{
		cout << "has³o nie poprawne";
	}

}

//Program sprawdzaj¹cy czy podana data jest poprawna
//(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task6()
{
	int day;
	int month;
	int year;
	cout << "Enter the day: " << endl;
	cin >> day;
	cout << "Enter the month: " << endl;
	cin >> month;
	cout << "Enter the year: " << endl;
	cin >> year;
	if (month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0)
			{
				if (day < 30)
				{
					cout << "date is correct";
				}
				else
				{
					cout << "date is incorrect";
				}

			}
			else if (year % 4 != 0 && year % 100 > 1 || year % 400 != 0)
			{
				if (day < 29) {
					cout << "date is correct";
				}
				else
				{
					cout << "date is incorrect";
				}
			}
			
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		{
			cout << "Date is correct." << endl;
		}
		else if (day >= 1 && day <= 31)
		{
			cout << "Date is correct." << endl;
		}
		else
		{
			cout << "Date isn't correct." << endl;
		}
	}
}

//Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury
// (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
void task7()
{
	double temperature;

	cout << "Podaj temperature: \n";
	cin >> temperature;

	if (temperature > 20)
	{
		cout << "Jest ciep³o\n";
	}
	else if (temperature < 10)
	{
		cout << "jest ch³odno\n";
	}
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	//test();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6();
	//task7();
}

