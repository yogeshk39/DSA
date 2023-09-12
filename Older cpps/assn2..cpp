#include <iostream>
#include <limits.h>

#include<vector>

using namespace std;

int Transpose(int arr[][3], int row, int col, int transpose[][3])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}

void printarray(int arr[][3],int row,int col){
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout <<  arr[i][j] << ;
        }
    }
    cout << endl;
}

int main(){
    int arr[3][3]={{1,5,9},{8,9,4},{3,8,2}};
int row=3;
int col=3;
int transpose=[3][3];
cout << Transpose(arr,row,col);
cout << printarray(arr,row,col);



    return 0;
}




// #include <iostream>
// using namespace std;
// void Transpose(int arr[][3], int row, int col, int transpose[][3])
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             transpose[j][i] = arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }






// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     int transpose[3][3];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[j][i];
//         }
//     }
//     Transpose(arr, row, col, transpose);
// }