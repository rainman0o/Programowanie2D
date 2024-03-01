#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    int z;

public:
    Point()
    {
        x = 3;
        y = 7;
        z = 10;
    }

    Point(int xx)
    {
        x = xx;
        y = 7;
        z = 10;
    }

    Point(int xx, int yy, int zz )
    {
        x = xx;
        y = yy;
        z = zz;
    }

    void SetX(int value)
    {
        //x=abs(value)

        if (value >= 0)
        {
            x = value;
        }
        else
        {
            //reakcja na b³¹d
        }
    }
    int GetX()
        {
            //if(uprawnienia)
            return x;
        }
    
    double distanceFromCenter(Point p)
    {
        double distance;
        distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
        return distance;
    }
};



int main()
{
    setlocale(LC_CTYPE, "polish"); 

    Point firstPoint;
   // firstPoint.x = 3;
   // firstPoint.y = 5;
   //firstPoint.z = 8;

    cout << "Odleg³oœæ " << firstPoint.distanceFromCenter(firstPoint) << "\n";
}