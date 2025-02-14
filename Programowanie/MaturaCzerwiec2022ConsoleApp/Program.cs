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

