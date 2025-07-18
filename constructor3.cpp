#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend double calcDistance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPt()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
};

double calcDistance(Point p1, Point p2)
{
    double dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return dist;
}

int main()
{
    Point p(1, 0);
    p.displayPt();
    Point q(0, 70);
    q.displayPt();

    double distance = calcDistance(p, q);
    cout << "distance is: " << distance;
    return 0;
}