// See https://aka.ms/new-console-template for more information
Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");
Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");

string name = "JAN";
string surname = "KOWALSKI";
Console.WriteLine("Witaj " + name + " " + surname + " tutaj");
Console.WriteLine("Witaj {0} {1} tutaj", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj");

Console.WriteLine("Predkosc to km\\h");
Console.WriteLine(@"Predkosc to km\h");

int number = 5;
int secondNumber = 6;
Console.WriteLine($"number = {number}");
Console.WriteLine($"secondNumber = {secondNumber}");

void ParametrTest_v1(int p)
{
    p++; 
    Console.WriteLine($"ParametrTest_v1: p = {p} ");
}

void ParametrTest_v2(ref int p)
{
    p++;
    Console.WriteLine($"ParametrTest_v2: p = {p} ");
}

void ParametrTest_v3(out int p)
{
    p = 9;
    p++;
    Console.WriteLine($"ParametrTest_v3: p = {p} ");
}

ParametrTest_v1(number);
Console.WriteLine($"number = {number}");
 
ParametrTest_v2(ref number);
Console.WriteLine($"number = {number}");

int thirdNumber;

ParametrTest_v3(out thirdNumber);
Console.WriteLine($"number = {thirdNumber}");

Console.WriteLine("Podaj liczbe");
string strnumber = Console.ReadLine()!;

//int convertNumber = int.Parse(strnumber);
int convertNumber;
if (int.TryParse(strnumber, out convertNumber))
    Console.WriteLine($"Dwa razy wieksza podana liczba: {convertNumber * 2}");
