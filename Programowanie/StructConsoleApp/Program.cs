Point firstPoint = new Point();
firstPoint.x = 5;
firstPoint.y = 10;
Point secondPoint = new Point();
secondPoint = firstPoint;
secondPoint.x = 6;
secondPoint.y = 99;
Console.WriteLine(firstPoint.x);
Console.WriteLine(secondPoint.x);