#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;



bool finde(int arr[][3], int r, int c, int k){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] == k){
                return true;
            }
        }
    }
    return false;
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

    int k=9;
    
    if(finde(arr,r,c,k)) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }



    return 0;
}