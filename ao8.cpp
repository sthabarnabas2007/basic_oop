//Code form the book
// processing the shopping list
#include<iostream>
using namespace std;
const int n=50;
class ITEMS{
    private:
    int itemCode[n];
    int itemPrice[n];
    int count;
    public:
    void CNT(void){
        count=0;
    }
    void getItem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
void ITEMS::getItem(void){
    cout<<"enter item code\t";
    cin>>itemCode[count];
    cout<<"Enter the item cost\t";
    cin>>itemPrice[count];
    count++;
}
void ITEMS::displaySum(void){
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=itemPrice[i];
    }
    cout<<"The sum of the items is :\t"<<sum;
}
void ITEMS::remove(void)
{
    int a;
    cout<<"Enter the items code\n";
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(itemCode[i]==a)
        {
            itemPrice[i]=0;
        }
    }
}
void ITEMS::displayItems(void){
    cout<<"The Items you have bought:\n";
    cout<<"Code\t\t"<<"price\n";
    for(int i=0;i<count;i++)
    {
        if(itemPrice[i]!=0)
        {
            cout<<itemCode[i]<<"\t\t"<<itemPrice[i]<<"\n";
        }
    }
    
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do{

        cout<<"Please select the given requriement which is mention below";
        cout<<"\n1.Add the items";
        cout<<"\n2.Display total value";
        cout<<"\n3.Delete an  item";
        cout<<"\n4.Display all item";
        cout<<"\n5.Quit";
        cout<<"\nChoose the given option\n";
        cin>>x;
        

    switch(x)
    {
        case 1:order.getItem(); break;
        case 2: order.displaySum(); break;
        case 3: order.remove(); break;
        case 4:order.displayItems(); break;
        case 5: break;
        defualt:cout<<"Error in the given program!!!";
    }
        }
    while(x!=5);
    return 0;
}