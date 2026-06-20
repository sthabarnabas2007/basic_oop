// Use of the multiple constructor and overloading the constructor
#include <iostream>
class complex
{
private:
    int x;
    int y;

public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float a, float b)
    {
        x = a;
        y = b;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.x + c2.y;
    return c3;
}
void show(complex c3)
{
    std::cout << c3.x << "+i" << c3.y << std::endl;
}
int main()
{
    complex A(1.2);
    complex B(3.4, 4.5);
    complex C;
    C = sum(A, B);
    std::cout << "A=";
    show(A);
    std::cout << std::endl;
    std::cout << "B=";
    show(B);
    std::cout << std::endl;
    std::cout << "The sum of the given co-ordinates is ";
    std::cout << "C=";
    show(C);
    std::cout << std::endl;
}