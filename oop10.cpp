// Using the static of the memeber function
#include <iostream>
class test{
    private:
    int code;
    static int count;
    public:
    void setcode(void){
        code=count++;
    }
    void showcode(void){
        std::cout<<"Object number:"<<code<<std::endl;
    }
    static void showcount(void)
    {
        std::cout<<"Count:"<<count<<std::endl;
    }

};
int test::count;

int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();

    

}