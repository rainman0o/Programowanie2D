using System.Globalization;

List<float> numbers = new List<float>();


Random random = new Random();
for(int i = 1; i <= 10; i++)
{
    numbers.Add(random.Next(i , 50));
}

foreach(float number in numbers)
{
    Console.WriteLine(number);
}

Console.WriteLine(Math.Pow((numbers[3]), 2));

Console.WriteLine(Math.Sqrt(numbers[5]));

Console.WriteLine("Podaj liczbe do dodania");
numbers.Add(int.Parse(Console.ReadLine()));

Console.WriteLine(numbers.Last());

var numbersEven = numbers.Select(s => s).Where(s => s % 2 == 0).OrderByDescending(s => s);

foreach(int eaven in numbersEven)
{
    Console.WriteLine(eaven);
}

for(int i = 0;i <= numbers.Count(); i+= 2)
{
    Console.WriteLine($"tyle wynosi {i} element {numbers[i]}");
}

var maxNum = numbers.Max();
Console.WriteLine($"Tyle wynosi maxymalna liczba{maxNum}");

var minNum  = numbers.Min();
Console.WriteLine(minNum);

