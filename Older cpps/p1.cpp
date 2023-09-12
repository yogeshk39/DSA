#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, columns;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}