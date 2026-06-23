//Inheritance--Iherit the properites of the parent by the child class
#include<iostream>
class shape{
    public:
    double area;
    double volume;
    };
class cube:public shape{
    public:
    double side;
    cube(double side){
        this->side=side;
        this->area=side*side*6;
        this->volume=side*side*side;
}


};
class sphere:public shape{
    public:
    double radius;
    sphere(double radius)
    {
        this->radius=radius;
        this->area=4*3.14*radius*radius;
        this->volume=4/3*3.14*radius*radius*radius;

    }
};
int main()
{
    sphere Sphere(5);
    std::cout<<"The Area of the sphere is "<<Sphere.area<<std::endl;
    std::cout<<"The Volume of the sphere is  "<<Sphere.volume<<std::endl;

    cube Cube(10);
     std::cout<<"The Area of the Cube is "<<Cube.area<<std::endl;
    std::cout<<"The Volume of the Cube is  "<<Cube.volume<<std::endl;

}