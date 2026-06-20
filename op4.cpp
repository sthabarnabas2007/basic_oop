// Returning objects ::transpose of the matrix using the friend function;
#include <iostream>

class matrix
{
    int m[3][3];

public:
    void read()
    {
        int i, j;
        std::cout<<"Insert the data in matrix"<<std::endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                std::cout<<"m["<<i<<"]["<<j<<"]";
                std::cin >> m[i][j];
            }
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                std::cout << m[i][j]<<"\t";
            }
            std::cout<<std::endl;
        }
    }
    friend matrix transpose(matrix);
};
matrix transpose(matrix m1)
{
    int i, j;
    matrix m2;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m2.m[j][i] = m1.m[i][j];
        }
    }
    return m2;
}

int main()
{
    matrix mat1, mat2;
    mat1.read();
    std::cout << "The orginal matrix is "<<std::endl;
    mat1.display();
    std::cout << "The transpose matrix is "<<std::endl;
    mat2 = transpose(mat1);
    mat2.display();
}
