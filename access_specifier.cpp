#include <iostream>

using namespace std;

class Student
{
  public:
    int id;
    int fees;

  protected:
    int rollno;

  private:
    int scholarship = 2500;

  public:
    void display()
    {
        cout << " ID : " << id
             << " FEES: " << fees
             << "Scholarship : " << scholarship
             << endl;
    }
};

int main()
{
    Student me;
    me.id = 1;
    me.fees = 1000;
    me.display();
}