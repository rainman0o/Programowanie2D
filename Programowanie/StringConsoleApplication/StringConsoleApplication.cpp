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
		

	cout << "Podaj tekst do sprawdznia";
	cin >> textFromUser;

	for (int i = 0; i < textFromUser.length() ; i++)
	{
		if (textFromUser[i] == 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U' || 'y' || 'Y' || 'ó' || 'Ó' || '¹' || '¥' || 'ê' || 'Ê')
		{
			vovel++;
		}

		else if (textFromUser[i] == 'b' || 'B' || 'c' || 'C' || 'æ' || 'Æ' || 'd' || 'D' || 'f' || 'F' || 'g' || 'G' || 'h' || 'H' || 'j' || 'J' || 'k' || 'K'||
									'l' || 'L' || '³' || '£' || 'm' || 'M' || 'n' || 'N' || 'ñ' || 'Ñ' || 'p' || 'P' || 'r' || 'R' || 's' || 'S' ||'œ' || 'Œ' || 
									't' || 'T' || 'w' || 'W' || 'z' || 'Z' || 'Ÿ' || '' || '¿' || '¯')
		{
			consonant++;
		}

		else if (textFromUser[i] == '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')
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



int main()
{
	//task1();
	//task2();
	task3();
}

