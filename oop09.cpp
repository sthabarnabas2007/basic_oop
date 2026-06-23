// Using the static Class Memeber
#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getcount(void)
    {
        cout << "Count: ";
        cout << count << "\n";
    }
    void getdata(int a)
    {
        number = a;
        count++;
    }
};
int item::count;
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(100);
    c.getdata(100);
    std::cout << "Displaying the static value after using the static memeber function\n";
    a.getcount();
    b.getcount();
    c.getcount();
}
