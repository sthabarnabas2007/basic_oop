// #include<iostream>
// class mean{
//     private:
//     int a;
//     int b;
//     public:
//     void setvalue(int a,int b){
//         this->a=a;
//         this->b=b;

    
//     }
//     friend void realmean(mean m);
// };
// float realmean(mean m)
// {
//  return float(m.a+m.b)/2.0;
// } 
// int main()
// {
//     sample x;
//     x.setvalue();
//     std::cout<<"Mean Value = "<<mean(x)<<std::endl;
//     return 0;
// }

#include <iostream>

class Mean {
private:
    int a;
    int b;

public:
    // Use different names for parameters or use 'this->' to avoid shadowing
    void setvalue(int x, int y) {
        a = x;
        b = y;
    }

    // Return type must match the definition (float)
    friend float realmean(Mean m);
};

// Definition of the friend function
float realmean(Mean m) {
    return float(m.a + m.b) / 2.0;
}

int main() {
    Mean x;           // Changed 'sample' to 'Mean'
    x.setvalue(24, 30); // Passed the required arguments

    // Called the friend function 'realmean' instead of the class name 'mean'
    std::cout << "Mean Value = " << realmean(x) << std::endl;

    return 0;3
    +
}