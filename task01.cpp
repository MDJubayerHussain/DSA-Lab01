// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

/*Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.*/


#include <iostream>

using namespace std;

int main()
{
    int i,n;
    int * p;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<endl;
    p = new int[n];
    for(i=0; i<n; i++)
    {
        cout<<(i+1)<<".Enter the values to the array elements : ";
        cin>>p[i]; //pointer of subscript notation
        cout<<endl;
    }
    for (i=0; i<n; i++)
    {
        cout<<(i)<<" Index value is :"<<p[i];
        cout<<endl;
    }
    delete []p;
    return 0;
}

