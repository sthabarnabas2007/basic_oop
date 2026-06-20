//About the constructors --program is regarding the parameterized constructor
#include<iostream>
class point{
    private:
    int x;
    int y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;

    }
    
    void display()
    {
            std::cout<<"("<<x<<","<<y<<")"<<std::endl;

    }
};
int main()
{
    point  p1(10,3);
    std::cout<<"The co-ordinate p1 is";
    p1.display();
    point p2(5,3);
    std::cout<<"The co-ordinate p2 is";
    p2.display();

}
