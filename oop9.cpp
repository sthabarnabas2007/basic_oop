#include <iostream>
class Fixed_deposit
{
private:
    long int p_amount;
    int year;
    float rate;
    float r_value;

public:
    Fixed_deposit() {}
    Fixed_deposit(long int p, int y, float r = 0.12);
    Fixed_deposit(long int p, int y, int r);
    void display(void);
};
Fixed_deposit::Fixed_deposit(long int p, int y, float r )
{
    p_amount = p;
    rate = r;
    year = y;
    r_value = p_amount;
    for (int i = 1; i <= y; i++)
    {
        r_value = r_value * (1 + r);
    }
}
Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    p_amount = p;
    rate = r;
    year = y;
    r_value = p_amount;
    for (int i = 1; i <= y; i++)
    {
        r_value = r_value * (1 + float(r) / 100);
    }
}
void Fixed_deposit::display(void)
{
    std::cout << std::endl;
    std::cout << "Principal amount: " << p_amount << std::endl;
    std::cout << "Total amount: " << r_value << std::endl;
}
int main()
{
    Fixed_deposit Fd1, Fd2, Fd3;
    int y;
    int p;
    float r;
    int R;
    std::cout << "Deposit the costumer 1" << std::endl;
    std::cout << "Enter the principal,year,rate(in percentage)" << std::endl;
    std::cin >> p >> y >> R;
    Fd1 = Fixed_deposit(p, y, R);

    std::cout << "Deposit the costumer 2" << std::endl;
    std::cout << "Enter the principal,year,rate(in decmial)" << std::endl;
    std::cin >> p >> y >> r;
    Fd2 = Fixed_deposit(p, y, r);

    std::cout << "Deposit the costumer 3" << std::endl;
    std::cout << "Enter the principal,year)" << std::endl;
    std::cin >> p >> y;
    Fd3 = Fixed_deposit(p, y);

    std::cout << "The Total amount  of the given costumer are:" << std::endl;
    std::cout << "Amount of costumer 1:" << std::endl;
    Fd1.display();
    std::cout << "Amount of costumer 2:" << std::endl;
    Fd2.display();
    std::cout << "Amount of costumer 3:" << std::endl;
    Fd3.display();
}