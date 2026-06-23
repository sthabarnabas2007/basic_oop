#include <iostream>
class employee
{
private:
    char name[30];
    int age;
    char address[40];

public:
    void getData(void);
    void putData(void);
};
void employee::getData(void)
{
    std::cout << "Name:" << std::endl;
    std::cin >> name;
    std::cout << "Age:"<< std::endl;
    std::cin >> age;
    std::cout << "Address:"<< std::endl;
    std::cin >> address;
};
void employee::putData(void){
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Age:"<<age<<std::endl;
    std::cout<<"Address:" <<address<<std::endl;
};
const int size=3;
int main()
{
 employee manager[size];
 for(int i=0;i<size;i++){
    std::cout<<"\n\nEnter the details of the employee "<<i+1<<std::endl;
    manager[i].getData();
 }
 std::cout<<"The details of the given employee are:"<<std::endl;
 for(int i=0;i<size;i++){
    std::cout<<"\nDetails of the employee "<<i+1<<std::endl;
    manager[i].putData();
 }
}
