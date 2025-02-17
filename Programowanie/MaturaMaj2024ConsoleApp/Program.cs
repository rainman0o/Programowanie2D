StreamReader streamReader = new StreamReader("skrot_przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

List<int> intNumbers = strNumbers.Select(s => int.Parse(s)).ToList();


int evenShortcut(int number)
{
    int result = 0;
    int multiplier = 1;
    
    while (number > 0)
    {
        int digit = number % 10;
        if (digit % 2 == 0) 
        {
            result = digit * multiplier + result;
            multiplier *= 10;
        }
        number /= 10;
    }

    return result;
}

