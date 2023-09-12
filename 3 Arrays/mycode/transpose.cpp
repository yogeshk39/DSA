#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


void trans(int arr[][3], int r, int c, int t[][3]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            // swap(arr[i][j],arr[j][i]);
            t[j][i] = arr[i][j];
        }
    }
}

void printa(int arr[][3], int r, int c){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
          cout << endl;
    }
 
}



int main()
{
    int arr[3][3];
    int r=3;
    int c=3;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }

    }

cout << "printing" << endl;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int t[3][3];
    trans(arr, r, c, t);
    cout << "prnting again " << endl;
    printa(t,r,c);


    return 0;
}