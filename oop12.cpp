// //Objects as Function Arguments
// #include<iostream>
// class time{
//     private:
//     int hours;
//     int minutes;
//     public:
//     void display(){
//         std::cout<<hours<<":"<<minutes<<std::endl;
//     }
//     void setTime(int h,int m)
//     {
//         hours=h;
//         minutes=m;

//     }
//     void sumTime(time t1,time t2){
//         minutes=t1.minutes+t2.minutes;
//         hours=minutes/60;
//         minutes%=60;
//         hours=hours+t1.hours+t2.hours;
//     }
// };
// int main()
// {
//     time t1,t2;
//     t1.setTime(2,30);
//     t2.setTime(3,50);
//     std::cout<<"The time t1 is ";
//     t1.display();
//     std::cout<<"The time t2 is ";
//     t2.display();
//     time t3;
//     t3.sumTime(t1,t2);
//     std::cout<<"The final time is ";
//     t3.display();
// }