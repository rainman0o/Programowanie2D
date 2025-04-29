StreamReader streamReader = new StreamReader("przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

Console.WriteLine("zadanie 4.1");

var reversDividedBy17 = strNumbers.Where(s => int.Parse(string.Join("", s.Reverse())) % 17 == 0)
    .Select(s => string.Join("", s.Reverse()));

foreach(var strNumber in reversDividedBy17)
{
    Console.WriteLine(strNumber);
}

Console.WriteLine("zadanie 4.2");

var strNumberWithMaxDiffrence = strNumbers.OrderBy(s => Math.Abs(int.Parse(s)  - int.Parse(string.Join("", s.Reverse())))).LastOrDefault();

Console.Write(strNumberWithMaxDiffrence);
Console.Write(" ");
Console.WriteLine(Math.Abs(int.Parse(strNumberWithMaxDiffrence) - int.Parse(string.Join("", strNumberWithMaxDiffrence.Reverse()))));

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

var primeReverses = strNumbers.Where(s => { int number = int.Parse(s); int reversedNumber = int.Parse(string.Join("", s.Reverse())); return IsPrime(number) && IsPrime(reversedNumber); });

foreach (var strNumber in primeReverses)
{
    Console.WriteLine(strNumber);
}

Console.WriteLine("zadanie 4.4");

var groupedNumbers = strNumbers.GroupBy(s => s).ToList();

int differentNumbersCount = groupedNumbers.Count();
int appearTwiceCount = groupedNumbers.Count(g => g.Count() == 2);
int appearThreeTimesCount = groupedNumbers.Count(g => g.Count() == 3);

Console.WriteLine($"{differentNumbersCount} {appearTwiceCount} {appearThreeTimesCount}");