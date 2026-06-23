// // Dynamic Constructor--Constructors with new
// #include<iostream>
// #include<cstring>
// class String{
//     private:
//     int length;
//     const char *name;
//     public:
//     String(){
//         length=0;
//         name = new char[length +1 ];
//         }
//     String(char*s){
//         length=strlen(s);
//         name = new char[length +1 ];
//         strcpy(s,name);
//         }
//     void display()
//     {
//         std::cout<<name;
//     }
//     void join(String &a,String &b);
// };

//  void String::join(String &a,String &b)
//  {
//     length=a.length+b.length;
//     delete[] name;
//     name=new char(length+1);
//     strcpy(name,a.name);
//     strcat(name,b.name);
//  }
//  int main()
//  {
//     char*first="Shyam";
//     String name1(first),name2("Babu"),name3("shrestha"),s1,s2;
//     s1.join(name1,name2);
//     s2.join(s1,name3);
//     name1.display();
//     name2.display();
//     name3.display();
//     s1.display();
//     s2.display();


//  }


// #include <iostream>
// #include <cstring>

// class String {
// private:
//     int length;
//     char *name; // Removed 'const' so we can modify it

// public:
//     // Default Constructor
//     String() {
//         length = 0;
//         name = new char[length + 1];
//         name[0] = '\0'; // Ensure it's a valid empty string
//     }

//     // Parameterized Constructor
//     String(const char *s) { // Use const char* for input
//         length = strlen(s);
//         name = new char[length + 1];
//         strcpy(name, s); // Corrected: (destination, source)
//     }

//     // Destructor to free memory
//     ~String() {
//         delete[] name;
//     }

//     void display() {
//         std::cout << name << std::endl;
//     }

//     void join(String &a, String &b);
// };

// void String::join(String &a, String &b) {
//     length = a.length + b.length;
//     delete[] name; // Clean up existing memory
    
//     name = new char[length + 1]; // Use [] for array allocation
//     strcpy(name, a.name);        // Copy first string
//     strcat(name, b.name);        // Append second string
// }

// int main() {
//     // String literals should be const
//     const char *first = "Shyam ";
    
//     String name1(first);
//     String name2("Babu ");
//     String name3("Shrestha");
//     String s1, s2;

//     s1.join(name1, name2);
//     s2.join(s1, name3);

//     std::cout << "Name 1: "; name1.display();
//     std::cout << "Name 2: "; name2.display();
//     std::cout << "Name 3: "; name3.display();
//     std::cout << "Joined 1: "; s1.display();
//     std::cout << "Joined 2: "; s2.display();

//     return 0;
// }





#include<iostream>
#include<cstring>
class String{
    private:
    int length;
    char *name;
    public:
    String(){
        length=0;
        name= new char(length+1);
        name[0]='\0';
    }
    String(const char *s){
        length=strlen(s);
        name=new char(length+1);
        strcpy(name,s);
    }
    ~String(){
        delete[] name;
    }
    void display(){
        std::cout<<name;
    }
    void join(String&a ,String&b);
};
    void String::join(String&a ,String&b){
        length=a.length+b.length;
        delete[] name;
        name=new char(length+1);
        strcpy(name,a.name);
        strcat(name,b.name);
    }
    int main()
    {
        const char *first("Ram ");
        String name1(first),name2("Babu "),name3("Shrestha");
        String s1,s2;
        s1.join(name1,name2);
        s2.join(s1,name3);
        std::cout<<"The full name is ";
        s2.display();
        std::cout<<std::endl;
        
    }