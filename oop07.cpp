// #include <iostream>
// class shape
// {
// public:
//     double area;
//     double perimeter;
// };
// class Rect : public shape
// {
// public:
//     double length;
//     double breadth;
//     Rect(double length, double breadth)
//     {
//         this->length = length;
//         this->breadth = breadth;
//         this->area = length*breadth;
//         this->perimeter = 2*(length+breadth);
//     }
// };
// class Square : public shape
// {
// public:
//     double length;
//     Square(double length)
//     {
//         this->length = length;
//         this->area = length*length;
//         this->perimeter = 4* length;
//     }
// // };

// // int main()
// // {
// //     Square square(5);
// //     std::cout << "The Area of the square is " << square.area << std::endl;
// //     std::cout << "The perimeter of the square is " << square.perimeter << std::endl;

// //     Rect rect(15, 4);
// //     std::cout << "The Area of the rectangle is " << rect.area << std::endl;
// //     std::cout << "The perimeter of the rectangle is " << rect.perimeter << std::endl;
// // }


// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     long books[100]; // array to store book IDs
//     int count = 0;   // number of issued books

// public:
//     void setName(string n)
//     {
//         name = n;
//     }

//     string getName()
//     {
//         return name;
//     }

//     void issueBook(long id)
//     {
//         books[count] = id;
//         count++;
//     }

//     void showIssuedBooks()
//     {
//         cout << "Issued Books IDs:\n";

//         for (int i = 0; i < count; i++)
//         {
//             cout << books[i] << endl;
//         }
//     }
// };

// int main()
// {
//     Student s;

//     string name;
//     cout << "Enter student name: ";
//     cin >> name;

//     s.setName(name);

//     int n;
//     cout << "How many books: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         long id;
//         cout << "Enter book id: ";
//         cin >> id;

//         s.issueBook(id);
//     }

//     cout << "\nStudent Name: " << s.getName() << endl;

//     s.showIssuedBooks();

//     return 0;
// }


// #include <iostream>
// #include <cmath> // For abs()

// // Simple Point structure
// struct Point {
//     double x, y;
// };

// class Rectangle {
//     Point p1, p2;

// public:
//     // Store the two points
//     void setPoints(const Point &a, const Point &b) {
//         p1 = a;
//         p2 = b;
//     }

//     // Calculate width and height using absolute difference
//     void getDimensions(double &w, double &h) {
//         w = std::abs(p1.x - p2.x);
//         h = std::abs(p1.y - p2.y);
//     }

//     // Calculate perimeter
//     double perimeter() {
//         double w, h;
//         getDimensions(w, h);
//         return 2 * (w + h);
//     }
// };

// int main() {
//     // Create points
//     Point a = {1.0, 5.0};
//     Point b = {4.0, 1.0};

//     // Create Rectangle and set points
//     Rectangle rect;
//     rect.setPoints(a, b);

//     // Get dimensions and perimeter
//     double width, height;
//     rect.getDimensions(width, height);

//     // Print results
//     std::cout << "Width: " << width << ", Height: " << height << std::endl;
//     std::cout << "Perimeter: " << rect.perimeter() << std::endl;

//     return 0;
// }


#include <iostream>
#include <string>

class Vector {
private:
    double v1, v2, v3; // The 3 elements
    bool isRow;        // true if Row vector, false if Column vector

public:
    // Constructor with default values
    Vector(double a = 0, double b = 0, double c = 0, bool row = true) {
        v1 = a;
        v2 = b;
        v3 = c;
        isRow = row;
    }

    // Destructor
    ~Vector() {
        // No dynamic memory to free, but good practice to define
    }

    // Method to add another vector to this one
    Vector add(Vector other) {
        // In linear algebra, vectors must be of the same type (both row or both column) to add
        if (this->isRow != other.isRow) {
            std::cout << "Warning: Adding a row vector to a column vector!" << std::endl;
        }

        // Return a new vector with the summed elements
        return Vector(v1 + other.v1, v2 + other.v2, v3 + other.v3, this->isRow);
    }

    // Helper to display the vector
    void display() {
        std::string type = isRow ? "Row" : "Column";
        std::cout << type << " Vector: [" << v1 << ", " << v2 << ", " << v3 << "]" << std::endl;
    }
};

int main() {
    // 1. Create two vectors
    Vector vec1(1.0, 2.0, 3.0, true);  // A Row vector
    Vector vec2(4.0, 5.0, 6.0, true);  // Another Row vector

    // 2. Add them
    Vector sum = vec1.add(vec2);

    // 3. Display results
    std::cout << "Vector 1: "; vec1.display();
    std::cout << "Vector 2: "; vec2.display();
    std::cout << "Sum:      "; sum.display();

    return 0;
}