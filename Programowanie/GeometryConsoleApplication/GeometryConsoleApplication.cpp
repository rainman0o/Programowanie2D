#include <iostream>

//zad 1

class Animal //Animal(Zwierzê)
{

};

//rodzaje
class Mamal :public Animal //Mammal (Ssak)
{

};

class Fish :public Animal //Fish (Ryba)
{

};

class Reptitle :public Animal //Reptile(Gad)
{

};        

class Bird :public Animal //Bird(Ptak)
{

};


//ptak
class Eagle :public Bird  //Eagle(Orze³)
{

};

class Sparrow :public Bird //Sparrow (Wróbel)
{

};


//ssak
class Tiger :public Mamal //Tiger(Tygrys)
{

};

class Dog :public Mamal //Dog (Pies)
{

};

class Cat :public Mamal //Cat (Kot)
{

};

class Lion :public Mamal //Lion(Lew)
{

};

//ryby

class Salomon :public Fish //Salmon (£osoœ)
{

};

class Trout :public Fish //Trout(Pstr¹g)
{

};

//gady
class Snake :public Reptitle //Snake (W¹¿)
{

};

class Turtle :public Reptitle //Turtle (¯ó³w)
{

};


//zad2

class Vehicle //Vehicle(Pojazd)
{

};

class Motorcycle :public Vehicle  //Motorcycle (Motocykl)
{

};

class Car :public Vehicle //Car(Samochód)
{

};

class Truck :public Vehicle //Truck (Ciê¿arówka)
{

};

//samochód
class Sedan :public Car //Sedan (Sedan)
{

};

class SUV :public Car //SUV (SUV)
{

};

class Pick_up :public Car //Pickup Truck (Pick-up)
{

};

//ciezarówka

class Semi_truck :public Truck //Semi-Truck (Ci¹gnik siod³owy)
{

};

//zad3

class Electronic_Device //Electronic Device(Urz¹dzenie elektroniczne)
{

};

//urzadenia
class Television :public Electronic_Device //Television (Telewizor)
{

};

class Smartphone :public Electronic_Device //Smartphone(Smartfon)
{

}; 

class Laptop :public Electronic_Device //Laptop(Laptop)
{

};

//smartfony

class Iphone :public Smartphone //iPhone (iPhone)
{

};

class Android_device :public Smartphone //Android Phone (Telefon z systemem Android)
{

};

//Telewiozry

class LED_TV :public Television //LED TV (Telewizor LED)
{

};

class Smart_TV :public Television //Smart TV (Telewizor Smart)
{

};
//xdxdxdxdxdxd



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

class Square : public Rectangle
{
protected:

public:
    Square(double side) :Rectangle(side, side)
    {
        //height = sideA = sideB = sideC = sideD = side;
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Rectangle : public Quadrangle
{
protected:

public:
    Rectangle(double firstSide, double secondSide) : Quadrangle(firstSide, secondSide, firstSide, secondSide, secondSide)
    {
        /* sideA = sideC = firstSide;
         height= sideB = sideD = secondSide;*/
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Trapeze : public Quadrangle
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
        return  (sideA + sideC) * height / 2;
    }
};



int main()
{
    Quadrangle q(3, 2, 4, 5, 2);

    Square s(6);
    std::cout << s.GetArea();
    std::cout << s.GetPerimeter();

    Rectangle r(10,5);
    std::cout << r.GetArea();
    std::cout << r.GetPerimeter();

    Trapeze t(10, 6, 4, 5, 3);
    std::cout << t.GetArea();
    std::cout << t.GetPerimeter();
}
