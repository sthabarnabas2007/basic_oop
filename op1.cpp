//Using the friend function inorder to add the two values using the classes
#include<iostream>
class abc;
class xyz{
    int data;
    public:
    void setvalue( int value)
    {
        data=value;
}
    friend void add(abc ,xyz );
};
class abc{
    int data;
    public:
    void setvalue( int value)
    {
        data=value;
}
    friend void add(abc ,xyz );
};
void add(abc obj1 ,xyz obj2)
{
    double sum=obj1.data+obj2.data;
    std::cout<<"The sum of the given data is "<< obj1.data<<" and "<<obj2.data <<" is "<<sum;
    
}


int main()
{
    xyz x;
    abc a;
    x.setvalue(15);
    a.setvalue(20);
    add(a,x);

}