# Programowanie3D
Console.WriteLine("zadanie 4.3");

bool IsPrime(int number)
{
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}

var primeReverses = strNumbers.Where(s =>{int number = int.Parse(s);int reversedNumber = int.Parse(string.Join("", s.Reverse())); return IsPrime(number) && IsPrime(reversedNumber);});

foreach (var strNumber in primeReverses)
{
    Console.WriteLine(strNumber);
}

// Zadanie 4.4
Console.WriteLine("zadanie 4.4");

var groupedNumbers = strNumbers.GroupBy(s => s).ToList();

int differentNumbersCount = groupedNumbers.Count();
int appearTwiceCount = groupedNumbers.Count(g => g.Count() == 2);
int appearThreeTimesCount = groupedNumbers.Count(g => g.Count() == 3);

Console.WriteLine($"{differentNumbersCount} {appearTwiceCount} {appearThreeTimesCount}");
