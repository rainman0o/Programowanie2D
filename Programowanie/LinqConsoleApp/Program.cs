using LinqConsoleApp;

List<Person> people = new List<Person>();

#region Uzupelnienie kolekcji
Person person = new Person();
person.Name = "Ewa";
person.Surname = "Kowalska";
person.Age = 32;

people.Add(person);

person = new Person();
person.Name = "Jan";
person.Surname = "Nowak";
person.Age = 12;

people.Add(person);

person = new Person();
person.Name = "Karol";
person.Surname = "Krawczyk";
person.Age = 52;

people.Add(person);

person = new Person();
person.Name = "Paweł";
person.Surname = "Nowakowski";
person.Age = 35;

people.Add(person);

person = new Person();
person.Name = "Paweł";
person.Surname = "Nowak";
person.Age = 5;

people.Add(person);

person = new Person();
person.Name = "Karol";
person.Surname = "Nowak";
person.Age = 23;

people.Add(person);

#endregion

Console.WriteLine("zawartosc głownej kolekcji");
/*
for(int i = 0; i < people.Count; i++)
{
    Console.WriteLine($"Imie: {people[i].Name} Nazwisko: {people[i].Surname} Wiek: {people[i].Age}");
}
*/

foreach(Person p in people)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

List<Person> sortedPeopleByAge = people.OrderBy(p => p.Age).ToList();
Console.WriteLine("Kolekcja posortowanana po wieku");
foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

sortedPeopleByAge = people.OrderByDescending(p => p.Age).ToList();
Console.WriteLine("Kolekcja posortowanana po wieku malejaco");
foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

Console.WriteLine();
int maxAge = people.Max(p => p.Age);
Console.WriteLine($"Najstarsza osoba ma: {maxAge}");
Console.WriteLine();

double avgAge = people.Average(p => p.Age);
Console.WriteLine($"Średni wiek: {avgAge} lat");
Console.WriteLine();

Console.Clear();

List<Person> sortedPeople = people.OrderBy(p => p.Surname).ThenBy(p => p.Age).ToList();

Console.WriteLine("Kolekcja posortowana");
foreach(Person p in sortedPeople)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

List<Person> mixedPeople = people.OrderBy(p => new Random().Next()).ToList();
Console.WriteLine("Kolejcja posortowana losowo");
foreach(Person p in mixedPeople)
{
    Console.WriteLine($"Imie: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

if(people.Any(p => p.Age < 18))
{
    Console.WriteLine("osoby sa niepełoletnie");
}

if (people.All(p => p.Age >= 18))
{
    Console.WriteLine("wszystkie osoby sa pełnoletnie");
}

Person firstPerson = people.FirstOrDefault(p => p.Name.Length == 3);

if(firstPerson.Equals(default(Person)) == false)
{
    Console.WriteLine("osoba z imieniem wiekszym niż 3 litery");
    Console.WriteLine($"{firstPerson.Name}");
}