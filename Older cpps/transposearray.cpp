#include <iostream>

using namespace std;


void transpose(int arr[][3], int row, int col, int trans[][3]){
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            trans[j][i] = arr[i][j];
        }
    }
}

void printarray(int arr[][3],int row,int col){
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
int arr[3][3]={{1,5,9},{8,9,4},{3,8,2}};
int row=3;
int col=3;
int trans[3][3];
cout << "normal array" << endl;
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

cout << "transposed array" << endl;

    transpose(arr,row,col,trans);
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        cout << trans[i][j] << " ";
    }
    cout << endl;
}
// printarray(trans,row,col);
    return 0;
}