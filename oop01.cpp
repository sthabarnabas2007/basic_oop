#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
      void getdata(int number, float cost);
      void putdata(void){
          cout<<"Number: "<< number<<endl;
          cout<<"Cost: "<<cost<<endl;
      }
};
void item::getdata( int number,float cost){
    this->number=number;
    this->cost=cost;
}
int main()
{
    item x;
    cout<<"\n object x"<<"\n";
    x.getdata(100,299.5);
    x.putdata();
    item y;
     cout<<"\n object y"<<"\n";
    y.getdata(200,175.50);
    y.putdata();
    return 0;
    
}