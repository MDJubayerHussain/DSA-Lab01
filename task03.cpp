// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

/*Using the new operator, allocate a two dimensional integer array. The number of rows and columns are going
to be provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven).
The user will specify how many elements the individual rows will have. Assign values to the array elements by taking
user inputs and then print the values. Finally de-allocate the array using the delete operator.*/

#include<iostream>
using namespace std;
int main()
{
    int row, col;
    //int array[row];
    cout<<"Enter the number of row : ";
    cin>>row;
    int array[row];
    int ** p = new int *[row];
    for(int i= 0; i <row ; i++)
    {
        cout<<i+1<<". Enter the number of col : ";
        cin>>col;
        p[i] = new int[col];
        array[i]=col;
        for(int j=0; j<col;j++)
        {
            cout<<"Array["<<i<<"] ["<<j<<"] : ";
            cin>>p[i][j];

        }
    }
    cout<<"Here are the 2D array :";

    cout<<endl<<endl;
    for(int i=0; i<row; i++)
    {
        int x = array[i];
        for(int j=0; j< x; j++)
        {
            cout<<"\t\t";
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < row; i++)
        delete []p[i];

    delete []p;

    return 0;
}
