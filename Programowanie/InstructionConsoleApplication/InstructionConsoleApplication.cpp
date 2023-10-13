#define _USE_MATH_DEFINES
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

	cout << "Podaj dzieñ:\n " << endl;
	cin >> day;

	cout << "Podaj miesi¹æ:\n " << endl;
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
	
//8. Program sprawdzj¹cy czy podana liczba jest z przedia³u < 1; 15)
void task8()
{
	double numberFromUser;

	cout << "Podaj liczbê do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser >= 1 && numberFromUser < 15)
	{
		cout << "Liczba jest w przedziale \n";
	}
	else
	{
		cout << "liczba nie nale¿y do przedzia³u";
	}

}

//9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
void task9()
{
	int age;

	cout << "podaj wiek do sprawdzenia\n ";
	cin >> age;

	if (age >= 18)
	{
		cout << "osoba jest pe³noletnia";
	}
	else
	{
		cout << "osoba jest niepe³noletnia";
	}

}	

//10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
void task10()
{
	double firstSideOfTriangle, secondSideOfTriangle, thirdSideOfTriangle;

	cout << "podaj pierwszy bok trójk¹ta: \n";
	cin >> firstSideOfTriangle;

	cout << "podaj drugi bok trójk¹ta: \n";
	cin >> secondSideOfTriangle;

	cout << "podaj trzeci bok trójk¹ta: \n";
	cin >> thirdSideOfTriangle;

	if (firstSideOfTriangle + secondSideOfTriangle > thirdSideOfTriangle && secondSideOfTriangle + thirdSideOfTriangle > firstSideOfTriangle
		&& firstSideOfTriangle + thirdSideOfTriangle > secondSideOfTriangle)
	{
		cout << "taki trójk¹t istnieje \n";
	}
	else
	{
		cout << "taki trój¹t nie istnieje";
	}

}

//11. Napisz program, który bêdzie dzia³aæ jako prosty kalkulator matematyczny, umo¿liwiaj¹c u¿ytkownikowi wybór operacji(dodawanie, odejmowanie, mno¿enie, dzielenie) i wprowadzanie liczb do obliczeñ.
void task11()
{
	int operation;
	double firstNumberFromUser, SecondNumberFromUser;

	cout << "Podaj operacje do wykonania \n 1. Dodawanie\n 2. Odejmowanie\n 3. Mno¿enie\n 4.Dzielenie \n";
	cin >> operation;

	cout << "Podaj pierwsza liczbê: ";
	cin >> firstNumberFromUser;

	cout << "Podaj drug¹ liczbê: ";
	cin >> SecondNumberFromUser;
	
	if (operation == 1)
	{
		cout << "wynik dzia³ania: " << firstNumberFromUser + SecondNumberFromUser;
	}
	else if (operation == 2)
	{
		cout << "wynik dzia³ania: " << firstNumberFromUser - SecondNumberFromUser;
	}
	else if (operation == 3)
	{
		cout << "wynik dzia³ania: " << firstNumberFromUser * SecondNumberFromUser;
	}
	else if (operation == 4)
	{
		cout << "wynik dzia³ania: " << firstNumberFromUser / SecondNumberFromUser;
	}

}

//12. Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
void task12()
{
	int month;

	cout << "podaj numer miesi¹ca:" ;
	cin >> month;

	switch (month)
	{
	case 1:
		cout << "Styczeñ";
		break;

	case 2:
		cout << "Luty";
		break;

	case 3:
		cout << "Marzec";
		break;

	case 4:
		cout << "Kwiecieñ";
		break;

	case 5:
		cout << "Maj";
		break;

	case 6:
		cout << "Czerwiec";
		break;

	case 7:
		cout << "Lipiec";
		break;

	case 8:
		cout << "Sierpieñ";
		break;

	case 9:
		cout << "Wrzesieñ";
		break;

	case 10:
		cout << "PaŸdziernik";
		break;

	case 11:
		cout << "Listopad";
		break;

	case 12:
		cout << "Grudzieñ";
		break;
	
	default: 
		cout << "nie ma takiego miesi¹ca";
	}
	
}

//13. Napisz program, który na podstawie wspó³czynników równania kwadratowego(a, b, c)
//  sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
void task13()
{
	double a, b, c;

	cout << "Podaj a: ";
	cin >> a;

	cout << "Podaj b: ";
	cin >> b;

	cout << "Podaj c: ";
	cin >> c;

	if (a != 0) {

		double delta = pow(b, 2) - 4 * (a * c);

		if (delta > 0)
		{
			double x1 = (-b - sqrt(delta)) / 2 * a;
			double x2 = (-b + sqrt(delta)) / 2 * a;

			cout << "s¹ 2 miejsca zerowe: " << x1 << "i: " << x2;

		}
		else if (delta == 0)
		{
			double x = -b / 2 * a;;
			cout << "miejsce zerowe wynosi: " << x;
		}

		else if (delta < 0)
		{
			cout << "równanie kwadratowe nie posiada rozwi¹zañ w zbiorze rzeczywistym";
		}

	}
	else
	{
		cout << "To nie jest równanie kwadratowe";
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
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
}

