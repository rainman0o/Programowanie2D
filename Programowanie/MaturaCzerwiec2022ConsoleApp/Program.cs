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