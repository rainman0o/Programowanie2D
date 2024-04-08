#include <iostream>

//napisz klasy które beda opisywaæ kwadrat prostok¹t i trapez

class Quadrangle
{
protected:
    double sideA, sideB, sideC, sideD, height;
public:
    Quadrangle(double firstSide,
        double secondSide,
        double thirdSide,
        double fourthSide,
        double h)
    {
        sideA = firstSide;
        sideB = secondSide;
        sideC = thirdSide;
        sideD = fourthSide;
        height = h;
    }
    
    double GetPerimeter()
    {
        return sideA + sideB + sideC + sideD;
    }
};

class Square: public Rectangle
{
protected:

public:
    Square(double side):Rectangle(side, side)
    {
        //height = sideA = sideB = sideC = sideD = side;
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Rectangle: public Quadrangle
{
protected:

public:
    Rectangle(double firstSide, double secondSide): Quadrangle(firstSide, secondSide, firstSide, secondSide, secondSide)
    {
       /* sideA = sideC = firstSide;
        height= sideB = sideD = secondSide;*/
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Trapeze: public Quadrangle
{
protected:

public:
    Trapeze(double firstSide,
        double secondSide,
        double thirdSide,
        double fourthSide,
        double h) : Quadrangle(firstSide, secondSide, thirdSide, fourthSide, h)
    {
       /* sideA = firstSide;
        sideB = secondSide;
        sideC = thirdSide;
        sideD = fourthSide;
        height = h;*/
    }

    double GetArea()
    {
      return  (sideA + sideC)* height / 2;
    }
};

int main()
{
    Quadrangle q(3, 2, 4, 5, 2);
    Square s(6);
    Rectangle r(10,5);
    Trapeze t(10, 6, 4, 5, 3);
}
