#include <iostream>
#include <limits.h>

#include<vector>

using namespace std;


void printSumRow(int arr[][3], int row, int col){
int sum=0;
    for (int i=0;i<row;i++){
    
        for (int j=0;j<col;j++){
            sum=sum + arr[i][j];
        }
        cout << sum << endl;
    }
  
}

bool findkey(int arr[][3], int row, int col, int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
}


int findmax(int arr[][3], int row, int col){
    int maxi=INT_MIN;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (arr[i][j] > maxi){
                maxi=arr[i][j];
                
            }
        }
    }
    return maxi;
}

int findmin(int arr[][3], int row, int col){
    int mini=INT_MAX;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (arr[i][j] < mini){
                mini=arr[i][j];
                
            }
        }
    }
    return mini;
}


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
// matrices

// int arr[3][3]={{1,5,9},{8,9,4},{3,8,2}};

// for (int i=0;i<3;i++){
// // row wise
//     for (int j=0;j<3;j++){

//     cout<< arr[i][j] << " ";

//         }
//         cout << endl;
//     }

//     for (int i=0;i<3;i++){
// // column wise
//     for (int j=0;j<3;j++){

//     cout<< arr[j][i] << " ";

//         }
//         cout << endl;
//     }

// inputting from user

// int arr[4][3];
// int row=4;
// int col=3;
// for (int i=0;i<row;i++){
//     for (int j=0;j<col;j++)
//         cin>> arr[i][j];
//     }

// // printing it

// for (int i=0;i<row;i++){
//     for (int j=0;j<col;j++){
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// int arr[3][3]={{1,5,9},{8,9,4},{3,8,2}};
// int row=3;
// int col=3;

// for (int i=0;i<3;i++){
// // row wise
//     for (int j=0;j<3;j++){

//     cout<< arr[i][j] << " ";

//         }
//         cout << endl;
//     }

    // printSumRow(arr,row,col);

// finding key in matrix 
    // cout << findkey(arr,3,3,9);






// max min in 2d array

//    cout <<  findmax(arr,row,col)<<endl;;
//    cout <<  findmin(arr,row,col);


// int arr[3][3]={{1,5,9},{8,9,4},{3,8,2}};
// int row=3;
// int col=3;
// int trans[3][3];
// cout << "normal array" << endl;
// for (int i=0;i<row;i++){
//     for (int j=0;j<col;j++){
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// cout << "transposed array" << endl;

//     transpose(arr,row,col,trans);
// for (int i=0;i<row;i++){
//     for (int j=0;j<col;j++){
//         cout << trans[i][j] << " ";
//     }
//     cout << endl;
// }




// vector init
int r=3;
int c=3;

    vector<vector<int> > arr(r, vector<int>(c, -8));



for (int i=0;i<arr.size();i++){
    for (int j=0;j<arr[0].size();j++){
        cout << arr[i][j] << " ";
    }
     cout << endl;
}

   return 0;
}







 