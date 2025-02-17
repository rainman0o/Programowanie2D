StreamReader streamReader = new StreamReader("skrot_przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

List<int> intNumbers = strNumbers.Select(s => int.Parse(s)).ToList();


int oddShortcut(int number)
{
    int singleNumber = 0;
    int shortcut;
    do
    {
        number % 10 = singleNumber;
        if(singleNumber % 2 == 0)
        {

        }

    } while (number > 0);
   

    return shortcut;
}

