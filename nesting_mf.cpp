#include <iostream>
using namespace std;
class Circle
{
  public:
    float radius, area;

  public:
    void read()
    {
        cout << "Enter the radius : ";
        cin >> radius;
    }

    void compute()
    {
        area = 3.14 * radius * radius;
    }

    void display()
    {
        compute();
        // function calling another member function of the same class
        cout << "Area : " << area << endl;
    }
};

int main()
{
    Circle c;
    c.read();
    c.display();

    Circle c2;
    c2.read();
    c2.display();
}