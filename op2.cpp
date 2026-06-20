//Subtracting using the friend function
#include<iostream>
class xyz;
class abc{
    int data;
    public:
    void setdata(int value)
    {
        data=value;

    }
    friend void diff(abc,xyz);
};
class xyz{
    int data;
    public:
    void setdata(int value)
    {
        data=value;

    }
    friend void diff(abc,xyz);
};
void diff (abc obj1,xyz obj2)
{
    int diff=obj1.data-obj2.data;
    std::cout<<"The object-1 is "<<obj1.data<<std::endl;
    std::cout<<"The object-2 is "<<obj2.data<<std::endl;
    std::cout<<"The difference of the two objects:"<<diff;
}

int main(){
    abc a;
    xyz x;
    a.setdata(50);
    x.setdata(30);
    diff(a,x);

}