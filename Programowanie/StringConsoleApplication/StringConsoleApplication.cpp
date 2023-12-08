#include <iostream>
using namespace std;

/*Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
*

* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara(proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).



*/


//Napisz program który wczyta znak z klawiatury i sprawdzi czu jest to mala litera alfabetu
void task1()
{
	char signFromUser;
	//signFromUser = 'a';
	
	cout << "podaj znak\n";
	cin >> signFromUser;

	cout << "Podales znak: " << signFromUser << "/n";


	//if (signFromUser >= 97 && signFromUser <= 122)
	if (signFromUser >= 'a' && signFromUser <= 'z')
	{
		cout << "Znak jest mala litera alfabetu";
	}
	else
	{
		cout << "Znak nie jest mala litera alfabetu";
	}

	signFromUser = signFromUser + 2;
	cout << "Podales znak" << signFromUser;

	signFromUser = signFromUser + 'a';
	cout << "Podales znak" << signFromUser;

}

//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task2()
{
	string creatingPassword;
	string passwordFromUser;

	cout << "Utworz haslo: \n";
	cin >> creatingPassword;

	cout << "-----------------------\n";
	
	do
	{
		cout << "zaloguj sie: \n";
		cin >> passwordFromUser;

		if (creatingPassword == passwordFromUser)
		{
			cout << "haslo poprawne\n";
		}
		else
		{
			cout << "haslo jest nie poprawne\n";
		}

	} while (creatingPassword != passwordFromUser);
	
}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task3()
{
	string textFromUser;
	int vovel = 0;
	int consonant = 0;
	int nummbers = 0;
	int marks = 0;
		

	cout << "Podaj tekst do sprawdznia: \n";
	cin >> textFromUser;

	for (int i = 0; i < textFromUser.length() ; i++)
	{
		if (textFromUser[i] == 'a' 
			|| textFromUser[i] == 'A' 
			|| textFromUser[i] == 'e' 
			|| textFromUser[i] == 'E' 
			|| textFromUser[i] == 'i' 
			|| textFromUser[i] == 'I' 
			|| textFromUser[i] == 'o' 
			|| textFromUser[i] == 'O'
			|| textFromUser[i] == 'u'
			|| textFromUser[i] == 'U'
			|| textFromUser[i] == 'y'
			|| textFromUser[i] == 'Y'
			|| textFromUser[i] == 'ó'
			|| textFromUser[i] == 'Ó'
			|| textFromUser[i] == '¹'
			|| textFromUser[i] == '¥'
			|| textFromUser[i] == 'ê'
			|| textFromUser[i] == 'Ê')
		{
			vovel++;
		}

		else if (textFromUser[i] == 'b' 
			|| textFromUser[i] == 'B'
			|| textFromUser[i] == 'c'
			|| textFromUser[i] == 'C'
			|| textFromUser[i] == 'æ'
			|| textFromUser[i] == 'Æ'
			|| textFromUser[i] == 'd'
			|| textFromUser[i] == 'D'
			|| textFromUser[i] == 'f'
			|| textFromUser[i] == 'F'
			|| textFromUser[i] == 'g'
			|| textFromUser[i] == 'G'
			|| textFromUser[i] == 'h'
			|| textFromUser[i] == 'H'
			|| textFromUser[i] == 'j'
			|| textFromUser[i] == 'J'
			|| textFromUser[i] == 'k'
			|| textFromUser[i] == 'K'
			|| textFromUser[i] == 'l'
			|| textFromUser[i] == 'L'
			|| textFromUser[i] == '³'
			|| textFromUser[i] == '£'
			|| textFromUser[i] == 'm'
			|| textFromUser[i] == 'M'
			|| textFromUser[i] == 'n'
			|| textFromUser[i] == 'N'
			|| textFromUser[i] == 'ñ'
			|| textFromUser[i] == 'Ñ'
			|| textFromUser[i] == 'p'
			|| textFromUser[i] == 'P'
			|| textFromUser[i] == 'r'
			|| textFromUser[i] == 'R'
			|| textFromUser[i] == 's'
			|| textFromUser[i] == 'S'
			|| textFromUser[i] == 'œ'
			|| textFromUser[i] == 'Œ'
			|| textFromUser[i] == 't'
			|| textFromUser[i] == 'T'
			|| textFromUser[i] == 'w'
			|| textFromUser[i] == 'W'
			|| textFromUser[i] == 'z'
			|| textFromUser[i] == 'Z'
			|| textFromUser[i] == 'Ÿ'
			|| textFromUser[i] == ''
			|| textFromUser[i] == '¿'
			|| textFromUser[i] == '¯')
		{
			consonant++;
		}

		else if (textFromUser[i] == '0' 
			|| textFromUser[i] == '1'
			|| textFromUser[i] == '2'
			|| textFromUser[i] == '3'
			|| textFromUser[i] == '4'
			|| textFromUser[i] == '5'
			|| textFromUser[i] == '6'
			|| textFromUser[i] == '7'
			|| textFromUser[i] == '8'
			|| textFromUser[i] == '9')
		{
			nummbers++;
		}

		else
		{
			marks++;
		}
	
	}

	cout << "w tym tekscie jest: \n" << vovel << ": samog³osek\n" << consonant << ": spó³g³osek\n" << nummbers << ": liczb\n" << marks << ": znaków specjanych\n";
}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu. 2 sposób
void task4()
{
	string textFromUser;
	int vovel = 0;
	int consonant = 0;
	int nummbers = 0;
	int marks = 0;


	cout << "Podaj tekst do sprawdznia: \n";
	cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z' || textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
		{
			if (textFromUser[i] == 'a'
				|| textFromUser[i] == 'A'
				|| textFromUser[i] == 'e'
				|| textFromUser[i] == 'E'
				|| textFromUser[i] == 'i'
				|| textFromUser[i] == 'I'
				|| textFromUser[i] == 'o'
				|| textFromUser[i] == 'O'
				|| textFromUser[i] == 'u'
				|| textFromUser[i] == 'U'
				|| textFromUser[i] == 'y'
				|| textFromUser[i] == 'Y')
			{
				vovel++;
			}
			else
			{
				consonant++;
			}
		}
		else if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
		{
			nummbers++;
		}
		else
		{
			marks++;
		}
	}

	cout << "w tym tekscie jest: \n" << vovel << ": samog³osek\n" << consonant << ": spó³g³osek\n" << nummbers << ": liczb\n" << marks << ": znaków specjanych\n";
}

//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
void task5()
{
	int numberFromUser;
	int rest;
	string binaryNumber = "";

	cout << "Podaj liczbe do zmienia na system binarny: ";
	cin >> numberFromUser;

	do
	{
		rest = numberFromUser % 2;
		numberFromUser /= 2;
		if (rest == 0)
		{
			binaryNumber = "0" + binaryNumber;
		}
		else
		{
			binaryNumber = "1" + binaryNumber;
		}
	} while (numberFromUser != 0);
	
	cout << "binarnie liczba wynosi: " << binaryNumber << "\n";
}

//*Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
void task6()
{
	
	std::string textFromUser;
	std::cout << "Podaj napis\n";
	std::cin >> textFromUser;

	
	bool isPalindrome = true;

	for (int left = 0, right = textFromUser.length() - 1; left < right; left++, right--)
	{
		if (textFromUser[left] != textFromUser[right])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
		std::cout << "To s³owo jest palindromem\n";
	else
		std::cout << "To s³owo nie jest palindromem\n";
		
}

//*Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
void task7()
{
	string firstTextFromUser;
	string secondTextFromUser;

	cout << "Podaj pierszy wyraz: \n ";
	cin >> firstTextFromUser;

	cout << "Podaj drugi wyraz: \n ";
	cin >> secondTextFromUser;

	if(firstTextFromUser.length() == secondTextFromUser.length())
	{
		for (int i = 0; i < firstTextFromUser.length(); i++)
		{
			bool isSignIn = false;
			for (int j = 0; j < secondTextFromUser.length(); j++)
			{
				if (firstTextFromUser[i] == secondTextFromUser[j])
				{
					secondTextFromUser[j] = ' ';
					isSignIn = true;
					break;
				}
			}
			if (isSignIn)
				continue;
			else
				break;
		}

		bool areAllSpace = true;
		for (int i = 0; i < secondTextFromUser.length(); i++)
		{
			if (secondTextFromUser[i] != ' ');
		}
		
		if (areAllSpace)
		{
			cout << "sa to anagramy";
		}
		else
		{
			cout << "to nie sa anagramy";
		}
	}
	else
	{
		cout << "To nie jest anagram\n ";
	}
}

//*Program wyci¹gaj¹cy informacje z numeru PESEL
void task8()
{
	string peselNumber;
	int month;
	int monthChecking;
	int day;
	int year;
	int gender;
	string genderChecking;
	int controlSum;

	cout << "podaj numer pesel: ";
	cin >> peselNumber;

	if (peselNumber.length() != 11)
	{
		cout << "pesel musi miec 11 znaków \n";
		return;
	}

	for (int i = 0; i < 11; i++)
	{
		if (peselNumber[i] < 48 || peselNumber[i] > 57)
		{
			cout << "pesel musi zawierac tylko cyfry \n";
			return;
		}
	}

	// , 01 - 12, 21 - 32, 41 - 52, 61-72 81 - 92

	month = (peselNumber[2] - '0') * 10 + (peselNumber[3] - '0');
	monthChecking = month % 20;

	if (monthChecking < 1 || monthChecking > 12)
	{
		cout << "nie ma takiego miesiaca";
	}

	day = (peselNumber[4] - '0') * 10 + (peselNumber[5] - '0');
	year = day = (peselNumber[0] - '0') * 10 + (peselNumber[1] - '0');

	//obliczanie roku 
	if (month >= 1 || month <= 12)
	{
		year + 1900;
	}
	else if (month >= 21 || month <= 32)
	{
		year + 2000;
	}
	else if (month >= 41 || month <= 52)
	{
		year + 2100;
	}
	else if (month >= 61 || month <= 72)
	{
		year + 2200;
	}
	else if (month >= 81 || month <= 92)
	{
		year + 1800;
	}

	//sprawdzenia dnia

	if (monthChecking == 2 )
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

	else if ((monthChecking == 4 || monthChecking == 6 || monthChecking == 9 || monthChecking == 11) && monthChecking >= 1 && monthChecking <= 30)
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

	//sprawdzanie p³ci
	gender = (peselNumber[9] - '0');

	if (gender % 2 == 0)
	{
		genderChecking = "kobieta";
	}
	else
	{
		genderChecking = "mê¿czyzna";
	}

	//sprawdzenia liczby kontrolnej
	controlSum =
		+(peselNumber[0] - '0') * 1
		+ (peselNumber[1] - '0') * 3
		+ (peselNumber[2] - '0') * 7
		+ (peselNumber[3] - '0') * 9
		+ (peselNumber[4] - '0') * 1
		+ (peselNumber[5] - '0') * 3
		+ (peselNumber[6] - '0') * 7
		+ (peselNumber[7] - '0') * 9
		+ (peselNumber[8] - '0') * 1
		+ (peselNumber[9] - '0') * 3
		+ (peselNumber[10] - '0') * 1;
	
	if (controlSum % 10 != 0)
	{
		cout << "liczba kontrolna jest niepoprawna";
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
	task8();

}

