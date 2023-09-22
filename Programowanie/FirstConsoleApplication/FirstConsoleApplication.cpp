
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

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
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
//Program obliczaj¹cy pole prostok¹ta.
{
    double firstSide;
    double secoundSide;

    cout << "podaj pierwszy bok prostok¹ta: \n";
    cin >> firstSide;

    cout << "podaj drugi bok prostok¹ta: \n";
    cin >> secoundSide;

    double areaOfRectangle = firstSide * secoundSide;

    cout << "pole prostok¹ta wynosi: " << areaOfRectangle;
}

//Program obliczaj¹cy objêtoœæ sto¿ka.
void task3()
{
    double height;
    double radius;
     
    cout << "podaj wysokoœæ sto¿ka: \n";
    cin >> height;

    cout << "podaj promieñ sto¿ka: \n";
    cin >> radius;

    double volume = (1.0 / 3) * M_PI * (radius * radius) * height;

    cout << "objêtoœæ sto¿ka wynosi: " << volume;

}


//Program obliczaj¹cy pole ko³a.
void task4()
{
    double radious;

    cout << "podaj promieñ ko³a \n";
    cin >> radious;

    double areaOfCircle = M_PI * pow(radious, 2);

    cout << "pole ko³a wynosi: " << areaOfCircle;
}

//Program obliczaj¹cy wartoœæ wyra¿enia a ^ 2 + b ^ 2
void task5()
{
    double number1;
    double number2;

    cout << "podaj pierwsz¹ liczbê: \n";
    cin >> number1;

    cout << "podaj drug¹ liczbê: \n";
    cin >> number2;

    double result = (pow(number1, 2)) + (pow(number2, 2));

    cout << "wynik wynosi: " << result;
}

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task6()
{
    double theBaseOfTriangle;
    double height;

    cout << "podaj d³ugoœæ podstawy trójk¹ta: \n";
    cin >> theBaseOfTriangle;

    cout << "podaj wysokoœæ trójk¹ta: \n";
    cin >> height;

    double areaOfTriangle = (theBaseOfTriangle * height) / 2;
    cout << "pole trójk¹ta wynosi: " << areaOfTriangle;

}

//Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task7()
{
    double radious;

    cout << "podaj promieñ kuli: \n";
    cin >> radious;

    double volume = (4.0 / 3) * M_PI * pow(radious, 3);

    cout << "pole kuli wynosi: \n" << volume;
}

//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task8()
{
    double theBaseOfTheTrapezoid1;
    double theBaseOfTheTrapezoid2;
    double height;

    cout << "podaj pierwsz¹ podstawê trapezu: \n";
    cin >> theBaseOfTheTrapezoid1;

    cout << "podaj drug¹ podstawê trapezu: \n";
    cin >> theBaseOfTheTrapezoid2;

    cout << "podaj wysokoœæ trazpezu";
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

