#include <iostream>

using namespace std;

//Napisz funkcje, kt�ra podzieli dwie liczby.

void test()
{
	double firstNumber, secondNumber;

	cout << "Podaj pierwsz� liczb�: \n";
	cin >> firstNumber;

	cout << "Podaj drug� liczb�: \n";
	cin >> secondNumber;

	double quotient = firstNumber / secondNumber;

	cout << "wynik dzielenia wynosi: " << quotient << "\n";
}

//Program sprawdzajacy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
	int firstNumber;
	int secoundNumber;

	cout << "Podaj pierwsz� liczb�: \n";
	cin >> firstNumber;

	cout << "Podaj drug� liczb�: \n";
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

//Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
void task2()
{
	double numberFromUser;

	cout << "Podaj liczb� do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser > 0)
	{
		cout << "liczba jest dodatnia\n";
	}
	else if (numberFromUser == 0) 
	{
		cout << "liczba jest r�wna zero\n";
	}
	else if (numberFromUser < 0)
	{
		cout << "liczba jest ujemna";
	}
}

//Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
void task3()
{

	int year;

	cout << "podaj rok do sprawdzenia\n";
	cin >> year;

	if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0 )
	{
		cout << "rok jest przest�pny \n ";
	}
	else
	{
		cout << "rok jest nieprzyst�pny";
	}

}

//Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny
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
		cout << "ocena dopuszczj�ca\n";
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
		cout << "ocena celuj�ca\n";
	}
	else 
	{
		cout << "nie ma takiej oceny";
	}
}

// Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123",
//  program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
void task5()
{
	string  password;
	
	cout << "Podaj has�o: \n";
	cin >> password;

	if (password == "abc123")
	{
		cout << "has�o poprawne";
	}
	else
	{
		cout << "has�o nie poprawne";
	}

}

//Program sprawdzaj�cy czy podana data jest poprawna
//(np.sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task6()
{
	int day;
	int month;
	int year;
	cout << "Podaj dzie�:\n " << endl;
	cin >> day;
	cout << "Podaj miesi��:\n " << endl;
	cin >> month;
	cout << "Podaj rok:\n " << endl;
	cin >> year;
	if (month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0)
			{
				if (day < 30)
				{
					cout << "data jest poprawna";
				}
				else
				{
					cout << "data jest nie poprawna";
				}

			}
			else if (year % 4 != 0 && year % 100 > 1 || year % 400 != 0)
			{
				if (day < 29) {
					cout << "data jest poprawna";
				}
				else
				{
					cout << "data jest nie poprwana";
				}
			}
			
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		{
			cout << "data jest poprawna" << endl;
		}
		else if (day >= 1 && day <= 31)
		{
			cout << "data jest nie poprawna" << endl;
		}
		else
		{
			cout << "data jest nie poprawna" << endl;
		}
	}
}

//Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury
// (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
void task7()
{
	double temperature;

	cout << "Podaj temperature: \n";
	cin >> temperature;

	if (temperature > 20)
	{
		cout << "Jest ciep�o\n";
	}
	else if (temperature < 10)
	{
		cout << "jest ch�odno\n";
	}
}
	
//8. Program sprawdzj�cy czy podana liczba jest z przedia�u < 1; 15)
void task8()
{
	double numberFromUser;

	cout << "Podaj liczb� do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser >= 1 && numberFromUser < 15)
	{
		cout << "Liczba jest w przedziale \n";
	}
	else
	{
		cout << "liczba nie nale�y do przedzia�u";
	}

}

//9. Program sprawdzaj�cy czy osoba jest pe�noletnia.
void task9()
{
	int age;

	cout << "podaj wiek do sprawdzenia\n ";
	cin >> age;

	if (age >= 18)
	{
		cout << "osoba jest pe�noletnia";
	}
	else
	{
		cout << "osoba jest niepe�noletnia";
	}

}	

//10. Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.
void task10()
{
	double firstSideOfTriangle, secondSideOfTriangle, thirdSideOfTriangle;

	cout << "podaj pierwszy bok tr�jk�ta: \n";
	cin >> firstSideOfTriangle;

	cout << "podaj drugi bok tr�jk�ta: \n";
	cin >> secondSideOfTriangle;

	cout << "podaj trzeci bok tr�jk�ta: \n";
	cin >> thirdSideOfTriangle;

	if (firstSideOfTriangle + secondSideOfTriangle > thirdSideOfTriangle && secondSideOfTriangle + thirdSideOfTriangle > firstSideOfTriangle
		&& firstSideOfTriangle + thirdSideOfTriangle > secondSideOfTriangle)
	{
		cout << "taki tr�jk�t istnieje \n";
	}
	else
	{
		cout << "taki tr�j�t nie istnieje";
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
	//task8();
	//task9();
	//task10();
}

