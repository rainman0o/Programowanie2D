using LinqTasksConsoleApp;
using System;
using System.Windows.Markup;

var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};

/*
var tasks = new List<TaskItem>();
tasks.Add(new TaskItem(1, "Buy groceries", true));
tasks.Add(new TaskItem(2, "Clean the house", false));
//itd.
*/
// Zadanie 1: Wyszukaj wszystkie zakończone zadania
var completeTasks = tasks.Where(p => p.IsCompleted == true);

Console.WriteLine("ukończone zadania: ");
foreach(var task in completeTasks)
{
    Console.WriteLine(task);
}

// Zadanie 2: Znajdź pierwsze zadanie, które nie jest zakończone
Console.WriteLine();
Console.WriteLine("pierwsze nie ukończone zadanie: ");
var firstNotCompleteTask = tasks.First(p => p.IsCompleted == false);
Console.WriteLine(firstNotCompleteTask);

// Zadanie 3: Posortuj zadania według nazwy
Console.WriteLine();
Console.WriteLine("posrotowane zadania po nazwie: ");
var sortedByName = tasks.OrderBy(p => p.Name).ToList();
foreach(var task in sortedByName)
{
    Console.WriteLine(task);
}

// Zadanie 4: Policz zadania zakończone
Console.WriteLine();
Console.WriteLine("Ilośc zakończonych zadań: ");
var howManyEndedTasks = tasks.Count(p => p.IsCompleted == true);
Console.WriteLine(howManyEndedTasks);

// Zadanie 5: Wybierz tylko nazwy zadań i wyświetl
/* Select Names from tasks */
Console.WriteLine();
Console.WriteLine("Nazwy zadań: ");
var tasksNames = tasks.Select(p => p.Name);
foreach (var task in tasksNames)
{
    Console.WriteLine(task);
}

// Zadanie 6: Znalezienie nazw zakończonych zadań posortowanych według długości nazwy
/*
 Select names
from task
whre task == true
OrderBy

 */
Console.WriteLine();
Console.WriteLine("Znalezienie nazw zakończonych zadań posortowanych według długości nazwy: ");
var endedTasksSortedByNamesLenght = tasks.Where(p => p.IsCompleted == true).OrderBy(p => p.Name.Length).Select(p => p.Name);
foreach (var task in endedTasksSortedByNamesLenght)
{
    Console.WriteLine(task);
}

//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy
Console.WriteLine();
Console.WriteLine("Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy");
var groupTasks = tasks.OrderBy(p=> p.IsCompleted).ThenBy(p=> p.Name);
foreach (var task in groupTasks)
{
    Console.WriteLine(task);
}

//Zadanie 8: Najkrótsza nazwa zadania niezakończonego
Console.WriteLine();
Console.WriteLine("Najkrótsza nazwa zadania niezakończonego");
var shortestNotEndedTasks = tasks.Where(p => !p.IsCompleted).OrderBy(p => p.Name.Length).Select(p => p.Name).FirstOrDefault();
if (shortestNotEndedTasks != null) 
Console.WriteLine(shortestNotEndedTasks);

//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań
Console.WriteLine();
Console.WriteLine("Ilość liter w nazwach wszystkich zakończonych zadań");
var sumOfNamedLenght = tasks.Where(p => p.IsCompleted).Select(p => p.Name.Length).Sum();
Console.WriteLine(sumOfNamedLenght);

//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)
Console.WriteLine();
Console.WriteLine("Lista zadań z indeksami (zakończone zadania z numeracją)");
var completedTasksWidthIndex = tasks.Where(t => t.IsCompleted)
    .Select((t, index) => new { Index = index + 1, Task = t });
foreach (var r in completedTasksWidthIndex)
{
    Console.WriteLine($"{r.Index}:");
    Console.WriteLine(r.Task);
}
//Zadanie 11: Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych
Console.WriteLine();
Console.WriteLine("Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych");
var groupTasks1 = tasks.GroupBy(t => t.IsCompleted)
    .Select(g => new { GroupVaule = g.Key, MaxName = g.OrderByDescending(t => t.Name.Length).First().Name });
//foreach (var group in groupTasks)
//{
//   Console.WriteLine($"Grupa zakończona: {group.GroupVaule}");
//   Console.WriteLine($"Najdłuższa nazwa w grupie: {group.MaxName}");
//}

//Zadanie 12: Zlicz, ile zadań w każdej grupie zawiera słowo „the” w nazwie
Console.WriteLine();
Console.WriteLine("Zlicz, ile zadań w każdej grupie zawiera słowo „the” w nazwie");
var countTheInTasks = tasks.GroupBy(p => p.IsCompleted).Select(g => 
new {GroupValue = g.Key, Count = g.Where(t => t.Name.Contains("the")).Count() });
foreach(var count in countTheInTasks)
{
    Console.WriteLine(count);
}

//Zadanie 13: Utwórz listę zakończonych zadań z ich numeracją oraz długością nazw
Console.WriteLine();
Console.WriteLine("Utwórz listę zakończonych zadań z ich numeracją oraz długością nazw");
var completedTasks = tasks.Where(t => t.IsCompleted).Select((t, index) => new {TaskNumber = index + 1, TaskName = t.Name,NameLength = t.Name.Length});
foreach (var task in completedTasks)
{
    Console.WriteLine($"Task #{task.TaskNumber}: {task.TaskName}, Length of name: {task.NameLength}");
}


//Zadanie 14: Zadania posortowane według stanu zakończenia, a następnie alfabetycznie według nazw
Console.WriteLine();
Console.WriteLine("Zadania posortowane według stanu zakończenia, a następnie alfabetycznie według nazw");
var sortedTaks = tasks.OrderBy(p => p.IsCompleted).ThenBy(p => p.Name);
foreach(var tak in sortedTaks)
{
   Console.WriteLine(tak);
}

//Zadanie 15: Sprawdź, czy w nazwach wszystkich zadań są co najmniej 2 różne samogłoski
Console.WriteLine();
Console.WriteLine("Sprawdź, czy w nazwach wszystkich zadań są co najmniej 2 różne samogłoski");
var twoDiffrentTasks = tasks.All(t => t.Name.ToLower().Where(c => "aeiouy".Contains(c)).Distinct().Count() >= 2);
Console.WriteLine(twoDiffrentTasks);

//Zadanie 16: Znajdź wszystkie unikalne litery używane w nazwach zadań zakończonych
var uniqueLettersinTasks = tasks.Where(t => t.IsCompleted).SelectMany(t => t.Name.ToLower()).Where(c => char.IsLetter(c)).Distinct();
Console.WriteLine(string.Join(", ", uniqueLettersinTasks));
