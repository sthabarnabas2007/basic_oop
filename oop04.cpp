// //Converting from the binary to the ones complement
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
using namespace std;
class binary
{
    string s;
    public:
    void read(void){
        cout<<"Enter the binary digits"<<endl;
        cin>>s;
    }

void chkbin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if (s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"The given binary is incorrrect fo enter the proper binary number\n"<<endl;
            cout<<"Press the Enter to exit.............. ";
            getch();
            exit(0);
        }
    }

}
void ones(void)
{
    chkbin();
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void display_ones(void)
{
    ones();
    cout<<"\n The  1's Ccmplient of the abouve binary nubmer is :"<<s<<endl;
}
};
int main()
{
    binary b;
    b.read();
    b.display_ones();
    return 0;
}

// #include <iostream>
// #include <string>
// #include <cstdlib> // Needed for exit()

// using namespace std;

// class binary {
//     string s;

// public:
//     void read(void) {
//         cout << "Enter the binary digits: ";
//         cin >> s;
//     }

//     void chkbin(void) {
//         for (int i = 0; i < s.length(); i++) {
//             if (s.at(i) != '0' && s.at(i) != '1') {
//                 cout << "The given binary is incorrect. Please enter a proper binary number." << endl;
//                 exit(0); // Terminate program if input is invalid
//             }
//         }
//     }

//     void ones(void) {
//         chkbin(); // Check validity before processing
//         for (int i = 0; i < s.length(); i++) {
//             // FIX 1: Use '==' for comparison, not '='
//             if (s.at(i) == '0') {
//                 // FIX 2: Use characters '1' and '0' inside quotes
//                 s.at(i) = '1';
//             } else {
//                 s.at(i) = '0';
//             }
//         }
//     }

//     void display_ones(void) {
//         ones(); // Perform conversion
//         cout << "The 1's Complement of the above binary number is: " << s << endl;
//     }
// };

// int main() {
//     binary b;
//     b.read();
//     b.display_ones();
    
//     // Using cin.get() as a portable alternative to getch()
//     cout << "\nPress Enter to exit...";
//     cin.ignore();
//     cin.get();
    
//     return 0;
// }
