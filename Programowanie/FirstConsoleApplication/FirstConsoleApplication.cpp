
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

void test1() 
{
    cout << "Hello World!\n";
    cout << -59.5 << "dasdasda" << 'x' << true << false << '\n';

    int number;
    number = 5;

    int secondNumber;
    secondNumber = number + 3;
}

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task1()
{
    double number1;
    double number2;

    cout << "podaj pierwsza liczbe \n";
    cin >> number1;

    cout << "podaj druga liczbe \n";
    cin >> number2;

    double avrageOfNumbers = (number1 + number2) / 2;
    
    cout << "wynik: " << avrageOfNumbers;
        
}

void task2()
//Program obliczaj�cy pole prostok�ta.
{
    double firstSide;
    double secoundSide;

    cout << "podaj pierwszy bok prostok�ta: \n";
    cin >> firstSide;

    cout << "podaj drugi bok prostok�ta: \n";
    cin >> secoundSide;

    double areaOfRectangle = firstSide * secoundSide;

    cout << "pole prostok�ta wynosi: " << areaOfRectangle;
}

//Program obliczaj�cy obj�to�� sto�ka.
void task3()
{
    double height;
    double radius;
     
    cout << "podaj wysoko�� sto�ka: \n";
    cin >> height;

    cout << "podaj promie� sto�ka: \n";
    cin >> radius;

    double volume = (1.0 / 3) * M_PI * (radius * radius) * height;

    cout << "obj�to�� sto�ka wynosi: " << volume;

}


//Program obliczaj�cy pole ko�a.
void task4()
{
    double radious;

    cout << "podaj promie� ko�a \n";
    cin >> radious;

    double areaOfCircle = M_PI * pow(radious, 2);

    cout << "pole ko�a wynosi: " << areaOfCircle;
}

//Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
    double number1;
    double number2;

    cout << "podaj pierwsz� liczb�: \n";
    cin >> number1;

    cout << "podaj drug� liczb�: \n";
    cin >> number2;

    double result = (pow(number1, 2)) + (pow(number2, 2));

    cout << "wynik wynosi: " << result;
}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
    double theBaseOfTriangle;
    double height;

    cout << "podaj d�ugo�� podstawy tr�jk�ta: \n";
    cin >> theBaseOfTriangle;

    cout << "podaj wysoko�� tr�jk�ta: \n";
    cin >> height;

    double areaOfTriangle = (theBaseOfTriangle * height) / 2;
    cout << "pole tr�jk�ta wynosi: " << areaOfTriangle;

}

//Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
    double radious;

    cout << "podaj promie� kuli: \n";
    cin >> radious;

    double volume = (4.0 / 3) * M_PI * pow(radious, 3);

    cout << "pole kuli wynosi: \n" << volume;
}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
    double theBaseOfTheTrapezoid1;
    double theBaseOfTheTrapezoid2;
    double height;

    cout << "podaj pierwsz� podstaw� trapezu: \n";
    cin >> theBaseOfTheTrapezoid1;

    cout << "podaj drug� podstaw� trapezu: \n";
    cin >> theBaseOfTheTrapezoid2;

    cout << "podaj wysoko�� trazpezu";
    cin >> height;

    double areaOfTheTrapezoid = 1.0 / 2 * (theBaseOfTheTrapezoid1 + theBaseOfTheTrapezoid2) * height;
    cout << "pole trapezu wynosi: " << areaOfTheTrapezoid;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //test1();
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6():
    //task7();
    //task8();

}

