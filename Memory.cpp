#include <iostream>
using namespace std;
class Book
{
  public:
    int name;
    char author[20];
};

int main(int argc, char const *argv[])
{
    Book b1;
    int result = sizeof(b1.author);
    cout << "Result: " << result;
    return 0;
}
