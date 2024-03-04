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
		std::cout << "obwód: " << CircutOfRectrangle()<< "\n";
		std::cout << "pole: " << AreaOfRectrangle() << "\n";
	}

};



int main()
{
	//Point firstPoint;
	//firstPoint.x = 3;
	//firstPoint.SetX(-3);
	//firstPoint.y = 5;
	//firstPoint.z = 8;
	//std::cout << "Odległość " << firstPoint.DistanceFromCenter() << "\n";
	//Point secondPiont(15);
	//std::cout << "Odległość " << secondPiont.DistanceFromCenter() << "\n";

	Rectrangle firstRectrangle;
	Rectrangle secondRectrangle(5, 7, "drugi Prostokąt");

	
   firstRectrangle.InformationAboutRectrangle();
   std::cout << "\n";
   secondRectrangle.InformationAboutRectrangle();
}