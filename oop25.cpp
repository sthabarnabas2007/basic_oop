// //Constructing the matrix
// #include<iostream>
// class matrix{
//     private:
//     int **p;
//     int d1,d2;
//     public:
//     matrix(int x,int y);
//     void get_element(int i,int j,int value){
//         p[i][j]=value;
//     }
//     int &put_element(int i,int j){
//         return p[i][j];
//     }

// };
// matrix::matrix(int x,int y){
//     d1=x;
//     d2=y;
//     p=new int*[d1];
//     for(int i=0;i<d1;i++)
//     {
//         p[i] =new int[d2];
//     }

// }
// int main()
// {
//     int m,n;
//     std::cout <<"Enter the size of matrix:";
//     std::cin>>m>>n;
//     matrix A(m,n);
//     std::cout<<"Enter the elements of the matrix row by row"<<std::endl;
//     int i,j,value;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             std::cin>>value;
//             A.get_element(i,j,value);
//         }
//     }
//     std::cout<<std::endl;
//     std::cout<<A.put_element(1,2);
//     return 0;
// }





// #include<iostream>
// class matrix{
//     private:
//     int d1,d2;
//     int **p;
//     public:
//     matrix(int x,int y);
//     void get_element(int i,int j,int value){
//         p[i][j]=value;
//     }
//     int &put_element(int i,int j){
//         return p[i][j];
//     }
    

// };
// matrix::matrix(int x,int y)
// {
//     d1=x;
//     d2=y;
//     p=new int*[d1];
//     for(int i=0;i<d1;i++)
//     {
//         p[i]=new int [d2];
//     }
// }
// int main()
// {
//     int m,n;
//     matrix A(m,n);
//     std::cout<<"Enter the size of the matrix:"<<std::endl;
//     std::cin>>m>>n;
//     std::cout<<"Enter the element in the matrix row  by row"<<std::endl;
//     int i,j,value;
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++)
//         {
//             std::cin>>value;
//             A.get_element(i,j,value);
//         }
//     }
//     std::cout<<std::endl;
//     std::cout<<A.put_element(1,2);

// }




//This is an incomplete portion


// //Using the copy constructor and making the matrix const
// // #include<iostream>
// // class matrix{
// //     private:
// //     int d1,d2;
// //     int **p;
// //     public:
// //     matrix (int x,int y);
// //     ~matrix();
// //     matrix(const matrix &other);
// //     void get_element(int x,int y){
        

        

// //     }
// //     int &put_element(int x,int y){

// //     }
    
// };