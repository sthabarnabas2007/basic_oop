// Using the pointer to acces the data members    ---ap=&a(data members) cout<<ap->*ip;
// Using the pointer to acces the oject ---define --int A::*ip=&A::m   cout<<a.*ip
#include <iostream>
class M
{
    int x, y;

public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int sum(M);
};
int sum(M m)
{
    int M::*px = &M::x;
    int M::*py = &M::y;
    M *ip = &m;
    int S = m.*px + ip->*py;
    return S;
}
int main()
{
    M n;
    void(M::*pf)(int,int)=&M ::set_xy;
    (n.*pf)(10,20);
    M *op=&n;
    std::cout<<"Sum="<<sum(n)<<std::endl;
    (op->*pf)(30,40);
    std::cout<<"Sum="<<sum(n)<<std::endl;

}