#include <iostream>
#include <ctime>

class Licz
{
private:
	float number;

public:

	float Dodaj(int numberForOperation) {
		return	number + numberForOperation;
	}

	float Odejmij(int numberForOperation) {
		return number - numberForOperation;
	}

	Licz()
	{
		number = 0;
	}

	Licz(float valueForNumber) {
		number = valueForNumber;
	}
};

class Sumator
{
private:
	int number[3];
public:
	Sumator()
	{
		for (int i = 0; i <= 2; i++)
		{
			number[i] = 0;
		}
	}
	
	Sumator(int numberForOperation)
	{
		for (int i = 0; i <= 2; i++)
		{
			number[i] = rand() % numberForOperation + 1;
		}
		
	}

	int Suma(){
		return number[0] + number[1] + number[2];
	}

	int SumaPodziel3()
	{
		int sum = 0;

		for (int i = 0; i <= 2; i++)
		{
			if (number[i] % 3 == 0)
			{
				sum = sum +  number[i];
			}
		}
		return sum;
	}

	void InforAboutNumbers()
	{
		std::cout <<"Pierwszy element: " << number[0]<<"\n" << "Drugi element: " << number[1]<<"\n" << "Trzeci element: " << number[2];
	}

	void LowHighIndex(int lowIndex, int highIndex)
	{
		std::cout << "low index: " << " \n";

		for (int i = 0; i <= 2; i++)
		{
			if (number[i] >= lowIndex)
			{
				std::cout << number[i] << "\n";
			}
		}

		std::cout << "hight index: " << " \n";

		for (int i = 0; i <= 2; i++)
		{
			if (number[i] <= highIndex) {
				std::cout << number[i] << "\n";
			}
		}
	}
};

class Osoba
{
protected:
	std::string name;
	std::string lastName;
	int age;

public:

	Osoba(std::string nameFromUser, std::string lastNameFromUser, int ageFromUser)
	{
		name = nameFromUser;
		lastName = lastNameFromUser;
		age = ageFromUser;
	}

	void Wypisz(){
		std::cout << "Imie: " << name << "\n"
			<< "Nazwisko: " << lastName << "\n"
			<< "Wiek: " << age << "\n";
	}
};

class Ksiazka :public Osoba{
protected:
	std::string title; 
	std::string date;
public:

	Ksiazka(std::string name, std::string lastName, int age, std::string titleFromUser, std::string dateFromUser ) : Osoba(name, lastName, age)
	{ 
		title = titleFromUser;
		date = dateFromUser;

	}
	
	void Wypisz() {
		std::cout << "Imie autora: "<< name <<"\n"<<
			"Nazwisko autora: "<< lastName << "\n" <<
			"Wiek autora: " << age <<"\n"<<
			"Tutul ksi¹¿ki: " << title << "\n" <<
			"Data wydania: " << date;
	}
};

class DateDescription
{
private:
	time_t localTime;
	time_t timeForNextWeek;
	time_t lastWeekTime;
public:

	DateDescription()
	{
		localTime = time(NULL);
		timeForNextWeek = time(NULL) + 604800;
		lastWeekTime = time(NULL) - 604800;
	}

	void ShowDate() {
		char tmBuff[30];

		ctime_s(tmBuff, sizeof(tmBuff), &localTime);

		std::cout << "Dzisiejsza data: " << tmBuff << '\n';
	}

	void ShowDateForNextWeek() {
		char tmBuff[30];

		ctime_s(tmBuff, sizeof(tmBuff), &timeForNextWeek);

		std::cout << "Data która bedzie za tydzieñ: " << tmBuff << '\n';
	}

	void ShowLastWeekDate(){
		char tmBuff[30];

		ctime_s(tmBuff, sizeof(tmBuff), &lastWeekTime);

		std::cout << "Data która by³a w tamtymn tygodniu: " << tmBuff << '\n';
	}
	
};

void firstTask()
{
	Licz operations1(10);
	std::cout << "ZADANIE 1" << "\n";

	std::cout << "KONSTRUKTOR PARAMETORWY" << "\n";
	std::cout << operations1.Dodaj(3) << "\n";
	std::cout << operations1.Odejmij(6) << "\n";
	std::cout << "\n";

	std::cout << "KONSTRUKTOR BEZ PARAMETORWY" << "\n";
	Licz operations2;
	std::cout << operations2.Dodaj(2) << "\n";
	std::cout << operations2.Odejmij(1) << "\n";
}

void secondTask() {
	std::cout << "ZADANIE 2" << "\n";
	std::cout << "\n";

	std::cout << "KONSTRUKTOR BEZ PARAMETORWY" << "\n";
	Sumator firstArray;
	std::cout << firstArray.Suma() << "\n";
	std::cout << firstArray.SumaPodziel3() << "\n";
	firstArray.InforAboutNumbers();
	std::cout << "\n";
	firstArray.LowHighIndex(3, 4);
	std::cout << "\n";

	std::cout << "KONSTRUKTOR PARAMETORWY" << "\n";
	Sumator SecondArray(5);
	std::cout << SecondArray.Suma() << "\n";
	std::cout << SecondArray.SumaPodziel3() << "\n";
	SecondArray.InforAboutNumbers();
	std::cout << "\n";
	SecondArray.LowHighIndex(5, 3);
	std::cout << "\n";
}

void thirdTask() {
	std::cout << "ZADANIE 3" << "\n";
	Osoba discharge("Marcel", "Kupis", 17);
	discharge.Wypisz();

	std::cout << "\n";
	Ksiazka descripton("Jan", "Kowalski", 36, "Ksiazka o czyms", "20.02.2000");
	descripton.Wypisz();
	
}

void fourthTask() {
	std::cout<< "\n" << "ZADANIE 4" << "\n";

	DateDescription date;

	date.ShowDate();
	date.ShowDateForNextWeek();
	date.ShowLastWeekDate();
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	//ZADANIE 1
	firstTask();

	//ZADANIE 2
	secondTask();

	//ZADANIE 3
	thirdTask();
	
	//ZADANIE 4
	fourthTask();
}

