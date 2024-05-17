#include <iostream>

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

int main()
{
	//ZADANIE 1
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

	//ZADANIE 2
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

	//ZADANIE 3


}

