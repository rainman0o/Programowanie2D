
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

    cout << "Podaj pierwsz� liczb� \n";
    cin >> number1;

    cout << "Podaj drug� liczb� \n";
    cin >> number2;

    double avrageOfNumbers = (number1 + number2) / 2;
    
    cout << "Wynik: " << avrageOfNumbers;
        
}

void task2()
//Program obliczaj�cy pole prostok�ta.
{
    double firstSide;
    double secoundSide;

    cout << "Podaj pierwszy bok prostok�ta: \n";
    cin >> firstSide;

    cout << "Podaj drugi bok prostok�ta: \n";
    cin >> secoundSide;

    double areaOfRectangle = firstSide * secoundSide;

    cout << "Pole prostok�ta wynosi: " << areaOfRectangle;
}

//Program obliczaj�cy obj�to�� sto�ka.
void task3()
{
    double height;
    double radius;
     
    cout << "Podaj wysoko�� sto�ka: \n";
    cin >> height;

    cout << "Podaj promie� sto�ka: \n";
    cin >> radius;

    double volume = (1.0 / 3) * M_PI * (radius * radius) * height;

    cout << "Obj�to�� sto�ka wynosi: " << volume;

}


//Program obliczaj�cy pole ko�a.
void task4()
{
    double radious;

    cout << "Podaj promie� ko�a \n";
    cin >> radious;

    double areaOfCircle = M_PI * pow(radious, 2);

    cout << "Pole ko�a wynosi: " << areaOfCircle;
}

//Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
    double number1;
    double number2;

    cout << "Podaj pierwsz� liczb�: \n";
    cin >> number1;

    cout << "Podaj drug� liczb�: \n";
    cin >> number2;

    double result = (pow(number1, 2)) + (pow(number2, 2));

    cout << "Wynik wynosi: " << result;
}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
    double theBaseOfTriangle;
    double height;

    cout << "Podaj d�ugo�� podstawy tr�jk�ta: \n";
    cin >> theBaseOfTriangle;

    cout << "Podaj wysoko�� tr�jk�ta: \n";
    cin >> height;

    double areaOfTriangle = (theBaseOfTriangle * height) / 2;
    cout << "Pole tr�jk�ta wynosi: " << areaOfTriangle;

}

//Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
    double radious;

    cout << "Podaj promie� kuli: \n";
    cin >> radious;

    double volume = (4.0 / 3) * M_PI * pow(radious, 3);

    cout << "Pole kuli wynosi: \n" << volume;
}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
    double theBaseOfTheTrapezoid1;
    double theBaseOfTheTrapezoid2;
    double height;

    cout << "Podaj pierwsz� podstaw� trapezu: \n";
    cin >> theBaseOfTheTrapezoid1;

    cout << "Podaj drug� podstaw� trapezu: \n";
    cin >> theBaseOfTheTrapezoid2;

    cout << "Podaj wysoko�� trazpezu";
    cin >> height;

    double areaOfTheTrapezoid = 1.0 / 2 * (theBaseOfTheTrapezoid1 + theBaseOfTheTrapezoid2) * height;
    cout << "Pole trapezu wynosi: " << areaOfTheTrapezoid;
}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{
    double number1;
    double number2;
    double number3;
    double numberWeight1;
    double numberWeight2;
    double numberWeight3;

    cout << "Podaj pierwsz� liczbe: \n";
    cin >> number1;
    cout << "Podaj wag� pierwszej liczby: \n";
    cin >> numberWeight1;

    cout << "Podaj drug� liczbe: \n";
    cin >> number2;
    cout << "Podaj wag� drugiej liczby: \n";
    cin >> numberWeight2;

    cout << "Podaj trzeci� liczbe: \n";
    cin >> number3;
    cout << "Podaj wag� trzeciej liczby: \n";
    cin >> numberWeight3;

    double averageGrade = ((number1 * numberWeight1) +
        (number2 * numberWeight2) + (number3 * numberWeight3)) /
        (numberWeight1 + numberWeight2 + numberWeight3);

    cout << "�rednia wa�ona z podanych liczb wynosi:  " << averageGrade;
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
    //task9();

}

