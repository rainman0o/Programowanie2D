StreamReader streamReader = new StreamReader("skrot_przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

List<int> intNumbers = strNumbers.Select(s => int.Parse(s)).ToList();

void oddShortcut()
{
    List<int> shortcuts = new List<int>();




   
}

