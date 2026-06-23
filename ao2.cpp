#include<iostream>
using namespace std;
class item{
    private:
        int number;
        float cost;
    public:
        void getdata(int a, float b);
        void putdata(void);
        
};
  void item:: getdata(int a, float b)
  {
    number=a;
    cost=b;
  }
void item:: putdata(void){
    cout<<"Number: "<<number<<endl;
    cout<<"Cost: "<<cost<<endl;
}
int main()
{
    item x;
    cout<<"Object X"<<endl;
    x.getdata(100,67.56);
    x.putdata();
    item y;
    cout<<"Object y"<<endl;
    y.getdata(200,23.56);
    y.putdata();
    return 0;
}