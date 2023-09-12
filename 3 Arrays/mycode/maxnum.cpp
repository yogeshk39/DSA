#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int getMax(int arr[][3], int r, int c){
    int maxi = INT_MIN;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
         }
    }
    return maxi;
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

    // psum(arr, r, c);



    cout << "max num: " << getMax(arr, r , c);




    return 0;
}