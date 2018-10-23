#include <iostream>

using namespace std;

int main()
{
    int addition(int x, int y);

    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    int result = addition(x, y);

    cout << "The addition of two numbers is : " << result << endl;

    return 0;
}

int addition(int x, int y)
{
    return (x + y);
}
