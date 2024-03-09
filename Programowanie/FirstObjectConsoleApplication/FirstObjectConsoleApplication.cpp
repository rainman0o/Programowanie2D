#include <iostream>

class Point
{
private:
	int x;
	int y;
	int z;

public:
	Point()
	{
		x = 3;
		y = 7;
		z = 10;
	}

	Point(int xx)
	{
		x = xx;
		y = 7;
		z = 10;
	}

	~Point()
	{

	}

	Point(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	void SetX(int value)
	{
		//x = abs(value);
		if (value >= 0)
			x = value;
		else
		{
			//reakcja na błąd
		}
	}

	int GetX()
	{
		//if (uprawnienia)

		return x;
	}

	double DistanceFromCenter()
	{
		double distance;
		distance = sqrt(x * x + y * y + z * z);
		return distance;
	}
};

class Rectrangle
{
private:
	int firstSide;
	int secondSide;
	int thirdSide;
	int fourthSide;
	std::string whichRectrangle;

public:

	Rectrangle()
	{
		firstSide = 2;
		secondSide = 2;
		thirdSide = 4;
		fourthSide = 4;
		whichRectrangle = "Pierszy prostokąt";
	}

	Rectrangle(int side1, int side2, std::string name)
	{
		firstSide = secondSide = side1;
		thirdSide = fourthSide = side2;
		whichRectrangle = name;
	}

	~Rectrangle()
	{

	}

	int AreaOfRectrangle()
	{
		int area;
		area = firstSide * thirdSide;
		return area;
	}

	int CircutOfRectrangle()
	{
		int circut;
		circut = firstSide + secondSide + thirdSide + fourthSide;
		return circut;
	}

	void InformationAboutRectrangle()
	{
		std::cout << whichRectrangle << "\n";
		std::cout << "obwód: " << CircutOfRectrangle() << "\n";
		std::cout << "pole: " << AreaOfRectrangle() << "\n";
	}

};

/*
ZADANIE
Zdefiniuj klase opisujące konto bankowe. Możliwości klasy:
* konstruktory
* metoda która dokona wpłaty na konto
* metoda która wypłaty z konta
* metoda która wykona przelew na inne konto
* metodę która pokaże informacje o koncie.

Napisz program który zaprezentuje możliwości obiektu na podstawie tej klasy.
*/

class  Account
{
private:
	float accountBalance;

public:

	Account(int money)
	{
		accountBalance = money;
	}

	~Account()
	{

	}

	int Payment(int howMuchMoney)
	{
		accountBalance = accountBalance + howMuchMoney;
		return accountBalance;
	}


	bool Paycheck(int howMuchMoney)
	{	
		if (howMuchMoney<= accountBalance)
		{
			accountBalance = accountBalance - howMuchMoney;
			return true;
		}
		return false;
	}

	void AccountInformation()
	{
		if (accountBalance > 0)
		{
			std::cout << "aktualny stan konta wynosi: " << accountBalance;
		}
		else
		{
			std::cout << " ";
		}
	}

	bool Transfer(int howMuch, Account &target)
	{
		if (Paycheck(howMuch))
		{
			target.Payment(howMuch);
			return true;
		}	
		return false;
	}

};



int main()

{
	setlocale(LC_CTYPE, "polish");

	//Point firstPoint;
	//firstPoint.x = 3;
	//firstPoint.SetX(-3);
	//firstPoint.y = 5;
	//firstPoint.z = 8;
	//std::cout << "Odległość " << firstPoint.DistanceFromCenter() << "\n";
	//Point secondPiont(15);
	//std::cout << "Odległość " << secondPiont.DistanceFromCenter() << "\n";

	//Rectrangle firstRectrangle;
	//Rectrangle secondRectrangle(5, 7, "drugi Prostokąt");


	//firstRectrangle.InformationAboutRectrangle();
	//std::cout << "\n";
	//secondRectrangle.InformationAboutRectrangle();

	Account konto1(20);
	Account konto2(10);

	//informacje o stanie konta
	konto1.AccountInformation();
	std::cout << "\n";
	konto2.AccountInformation();

	std::cout << "\n" << "TEST METODY WPLACANIA" << "\n";

	//wpłata na konto bankowe
	std::cout << "\n";
	konto1.Payment(4000);
	konto1.AccountInformation();
	std::cout << "\n";
	konto2.Payment(789);
	konto2.AccountInformation();

	std::cout << "\n" << "TEST METODY WYPLACANIA" << "\n";

	//wypłata z konta bankowego
	std::cout << "\n";
	konto1.Paycheck(1900);
	konto1.AccountInformation();
	std::cout << "\n";
	konto2.Paycheck(763);
	konto2.AccountInformation();

	std::cout << "\n" << "TEST PRZELEWU NA KONTO" << "\n";

	//przelew z jednego konta na drugie
	std::cout << "\n";
	if (konto1.Transfer(23, konto2))
	{
		std::cout << "przelew się udał" << "\n";
	}
	else
	{
		std::cout << "przelew się nie udał" << "\n";
	}
	konto1.AccountInformation();
	std::cout << "\n";
	konto2.AccountInformation();
}