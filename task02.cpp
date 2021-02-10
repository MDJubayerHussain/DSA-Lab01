// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

/*Task 2: Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.*/

#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    char** p = new char*[row];
    for (int i = 0; i < row; i++)
    {
        p[i]=new char[col];
    }
    cout<<"Enter the array elements :";
    cout<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter["<<i<<"]["<<j<<"] :";
            cin>>p[i][j];
        }
        cout<<endl;
    }

    cout<<"The elements in 2D array is:";
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << p[i][j] << " ";
        cout <<endl;
    }
    char a[100];
    gets(a);
    puts(a);


    for (int i = 0; i < row; i++)
        delete[] p[i];

    delete[] p;

    return 0;
}
