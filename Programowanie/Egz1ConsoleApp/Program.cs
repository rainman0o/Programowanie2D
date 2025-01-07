using System.Numerics;
using System.Reflection.Metadata.Ecma335;

int howManyCubes()
{
    int amountOfCubes;

    do
    {
        Console.WriteLine("Ile kostek chcesz rzucić? (3 - 10)");
        amountOfCubes = int.Parse(Console.ReadLine());
    } while (amountOfCubes < 3 || amountOfCubes > 10);

    return amountOfCubes;
}

int amountOfCubes = howManyCubes();

int[] howManyEyes(int howMany)
{
    int[] eyes = new int[howMany];
    Random random = new Random();
    for (int i = 0;  i <= howManyCubes(); i++)
    {  
        eyes[i] = random.Next(1, 7);
        Console.WriteLine($"Kostka {i + 1}: Liczba oczek {eyes[i] }");
    }
    return eyes;
}

howManyEyes(amountOfCubes);
