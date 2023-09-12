#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;



// bool finde(int arr[][3], int r, int c, int k){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
            
//         }
//     cout <<  << endl;
//     }
// }


void psum(int arr[][3], int r, int c){
    // row sum

    for(int i=0; i<r; i++){
        int sum=0;
        for(int j=0; j<c; j++){
            sum=sum + arr[i][j];
        }
    cout << sum << endl;
    }
}


int getMax(int arr[][3], int r, int c){
    int maxi = INT_MIN;
    // int mini = INT_MAX;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] > maxi){
            // if(arr[i][j] < mini){
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

    psum(arr, r, c);




    return 0;
}