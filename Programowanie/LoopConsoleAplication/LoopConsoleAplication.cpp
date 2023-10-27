#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

//Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10

void task1()
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << ", ";
	}

}

//Program obliczaj¹cy sumê liczb od 1 do 100

void task2()
{

	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	
	cout << "suma liczb o 1 do 100 wynosi: " << sum;
}

//Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task3() 
{
	

	for (int i = 0; i <= 10; i++)
	{
		cout << pow(i, 2) << ", ";
	}


}

int main()
{
	//task1();
	//task2();
	//task3();
}

