StreamReader streamReader = new StreamReader("przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

//zadanie4.1
int counter4_1 = strNumbers.Where(s => s[0] == s[s.Length - 1]).Count();
string firstNumber4_1 = strNumbers.First(s => s[0] == s[s.Length - 1]);

Console.WriteLine($"Zadanie 4.1\n{counter4_1} {firstNumber4_1}");

//zadanie4.2

int maxCountPrimeFactors = 0;
string maxNumberPrimeFactors = "";

int maxCountDifferentPrimeFactors = 0;
string maxNumberDifferentPrimeFactors = "";
foreach (string strNumber in strNumbers)
{
  
    int number = int.Parse(strNumber);
    int div = 2;

    List<int> primeFactors = new List<int>();
    while (number != 1)
    {
        if (number % div == 0)
        {
            
            primeFactors.Add(div);
            number = number / div;
        }
        else
            div++;
    }

    if (primeFactors.Count() > maxCountPrimeFactors)
    {
        maxCountPrimeFactors = primeFactors.Count();
        maxNumberPrimeFactors = strNumber;
    }

    if (primeFactors.Distinct().Count() > maxCountDifferentPrimeFactors)
    {
        maxCountDifferentPrimeFactors = primeFactors.Distinct().Count();
        maxNumberDifferentPrimeFactors = strNumber;
    }

    
}
Console.WriteLine($"Zadanie 4.2\n {maxNumberPrimeFactors} {maxCountPrimeFactors} {maxNumberDifferentPrimeFactors} {maxCountDifferentPrimeFactors}");

//zadanie 4.3
List<int> numbers = strNumbers.Select(s => int.Parse(s)).ToList();
int howManyGoodThrees = 0;
int howManyGoodFives = 0;
int x;
int y;
int z;



Console.WriteLine($"a){howManyGoodThrees}\nb){howManyGoodFives}");