//Using the deferencing operator for the subtraction
#include<iostream>
class M{
    private:
    int x;
    int y;
    public:
    void set_xy(int a,int b)
    {
        x=a;
        y=b;

    }
    friend int diff(M);
};
int diff(M m)
{
    int M::*px=&M::x;
    int M::*py=&M::y;
    M*ip=&m;
    int diff=m.*px-ip->*py;
    return diff;
}
int main()
{
    M o;
    void(M::*im)(int,int)=&M::set_xy;
    (o.*im)(30,10);
    std::cout<<"The difference ! is "<<diff(o);
    std::cout<<std::endl;;
    M *io=&o;
    (io->*im)(50,10);
    std::cout<<"The difference @ is "<<diff(o);
    std::cout<<std::endl;

}
