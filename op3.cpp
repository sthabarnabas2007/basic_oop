// swapping the private data memebrs using the friend function
#include <iostream>
class class_2;
class class_1
{
    int data1;

public:
    void setdata(int value)
    {
        data1 = value;
    }
    void dispaly()
    {
        std::cout << "The value of the oject_1 " << data1 << std::endl;
    }
    friend void exchange(class_1 &, class_2 &);
};
class class_2
{
    int data2;

public:
    void setdata(int value)
    {
        data2 = value;
    }
    void dispaly()
    {
        std::cout << "The value of the oject_2 " << data2 << std::endl;
    }
    friend void exchange(class_1 &, class_2 &);
};
void exchange(class_1 &x, class_2 &y)
{
    int temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;
}
int main()
{
    class_1 one;
    class_2 two;
    one.setdata(50);
    two.setdata(100);
    std::cout << "The Data before swapping is :" << std::endl;
    one.dispaly();
    two.dispaly();
    exchange(one, two);
    std::cout << "The value after calling the swapping the function" << std::endl;
    one.dispaly();
    two.dispaly();
}
