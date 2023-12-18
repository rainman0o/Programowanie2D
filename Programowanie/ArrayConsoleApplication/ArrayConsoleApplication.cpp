#include <iostream>

using namespace std;

//Napisz program, który wczyta 5 liczb a natêpnie je wyswietl na konsoli w odwrotej kolejnosci

void task1()
{
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << "Podaj liczbe\n";
        cin >> numbers[i];
    }

    for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
    {
        cout << "Podana liczba" << numbers[i] << "\n";
    }
}

void task2()
{
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }
    
    for ( int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    //szukanie maksimum 
    int max = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }

    //szukanie minimum
    int min = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }

    cout << "Maksymalna wartoœæ to: " << max << "\n";
    cout << "Minimalna wartoœæ to : " << min << "\n";
}

int main()
{
    //task1();
    task2();
}


