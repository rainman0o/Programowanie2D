StreamReader streamReader = new StreamReader("skrot_przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

List<int> intNumbers = strNumbers.Select(s => int.Parse(s)).ToList();

Console.WriteLine("zadanie 3.2");
int oddShortcut(int number)
{
    int result = 0;
    int multiplier = 1;
    
    while (number > 0)
    {
        int digit = number % 10;
        if (digit % 2 != 0) 
        {
            result = digit * multiplier + result;
            multiplier *= 10;
        }
        number /= 10;
    }

    return result;
}
int howManyNotOddShortcut = 0;
int biggestNotOddShortcut = 0;

foreach (int number in intNumbers)
{
   if(oddShortcut(number) == 0)
    {
        howManyNotOddShortcut++;
        if(number > biggestNotOddShortcut)
        {
            biggestNotOddShortcut = number;
        }
    }
}

Console.WriteLine(howManyNotOddShortcut);
Console.WriteLine(biggestNotOddShortcut);
Console.WriteLine("\nzadanie3.3");

StreamReader streamReader2 = new StreamReader("skrot2_przyklad.txt");

string strNumberFromFile2;
List<string> strNumbers2 = new List<string>();

while ((strNumberFromFile2 = streamReader2.ReadLine()) != null)
{
    strNumbers2.Add(strNumberFromFile2);
}

streamReader.Close();

List<int> intNumbers2 = strNumbers2.Select(s => int.Parse(s)).ToList();

int NWD(int a, int b)
{ 
    while(b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

var resoultOfNWD = intNumbers2.Where(n=> oddShortcut(n) > 0 && NWD(n, oddShortcut(n)) == 7).ToList();
foreach(int r in resoultOfNWD)
{
    Console.WriteLine(r);
}

