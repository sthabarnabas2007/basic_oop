// copy constructor
#include <iostream>
class code
{
private:
    int id;

public:
    code() {}
    code(int a)
    {
        id = a;
    }
    // code(code &x)
    // {
    //     id = x.id;
    // }
    void display()
    {
        std::cout << id;
    }
};
int main()
{
    code A = 100;
    code B(A);
    code C = A;
    code D;
    D = A;
    std::cout << "The value of A = ";
    A.display();
    std::cout << std::endl;
    std::cout << "The value of B = ";
    B.display();
    std::cout << std::endl;
    std::cout << "The value of C = ";
    C.display();
    std::cout << std::endl;
    std::cout << "The value of D = ";
    D.display();
    std::cout << std::endl;
}