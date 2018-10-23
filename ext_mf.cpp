#include <iostream>
using namespace std;

class Circle
{
  public:
    float radius, area;

  public:
    void read();
    void compute();
    void display();
};

void Circle::read()
{
    cout << "Enter the radius : ";
    cin >> radius;
}

void Circle::compute()
{
    area = 3.14 * radius * radius;
}

void Circle::display()
{
    cout << "Area : " << area << endl;
}

int main()
{
    Circle c;
    c.read();
    c.compute();
    c.display();
}