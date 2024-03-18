#include <iostream>

class C
{
private:
	int fieldA;
public:
	int GetFieldA()
	{
		return fieldA;
	}
};

class A
{
private:
	//int fieldA;
public:
	A()
	{
		fieldA = 5;
	}

	//int GetFieldA()
	//{
	//	return fieldA;
	//}

	void ShowInfo()
	{
		std::cout << "Informacja na temat klasy A\n";
		std::cout << "Field A = " << fieldA << "\n";
	}
};

class B
{
private:
	//int fieldA;
	int fieldB;
public:
	B()
	{
		fieldA = 5;
		fieldB = 4;
	}

	//int GetFieldA()
	//{
	//	return fieldA;
	//}

	int GetFieldB()
	{
		return fieldB;
	}

	void ShowInfo()
	{
		std::cout << "Informacja na temat klasy A\n";
		std::cout << "Field A = " << fieldA << "\n";
		std::cout << "Field B = " << fieldB << "\n";
	}
};

int main()
{
   
}

