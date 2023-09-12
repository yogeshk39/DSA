#include <iostream>
using namespace std;

int main(){
    // cout << "namaste bharat";
    // cout << "\n";

    // cout << "enter no " ;
    // char a;
    // cin >> a;

    // cout << "no is " << a << endl ; 

    
    // int s;

    // cout << "enter s" << endl;
    // cin >> s;

    // if (s>300){
    //     cout << "ind wins";}
    //     else
    //    { cout << "ind lose"; }

    // int n;
    // for (cout << "hi"){
    //     cout << "hi" << endl;
    // }



// full rect square

    // int i; 
    // int j; 
    // cin >> i;
    // cin >> j;
    // for(int r=0; r<i; r++){

    //     for(int c=0; c<j; c++ ){
    //         cout << "* ";
    //         if (i=0 && i<=r){
    //             cout << " ";
    //         }
           
    //     }
    // cout << endl;
   
    // }


// hollow 

//     int i; 
//     int j; 
//     cin >> i;
//     cin >> j;
//     for(int r=0; r<i; r++){
//     if (r==0 || r==i-1)
//         for(int c=0; c<j; c++ ){
//             cout << "* ";
//     }
//         else {
//             cout << "* ";
//         for(int c=0; c<j-2; c++ ){
//             cout << "  ";
//          }
//          cout << "* ";
//     }


//  cout << endl;

//     }
// }

    // int rowCount, colCount;
    // cin >> rowCount;
    // cin >> colCount;
    // for(int row=0; row<rowCount; row=row+1) {
    //  //first row or last row -> print 5 *
    //  if(row == 0  || row == rowCount-1 ){
    //      for(int col=0; col<colCount; col++) {
    //          cout << "* ";
    //      }
    //  }
    //  else {
    //      //remainging middle rows
    //      //first star
    //      cout << "* ";
    //      //spaces
    //      for(int i=0; i< colCount-2; i=i+1){
    //          cout << "  ";
    //      }
    //      //last star
    //      cout << "* ";
    //  }
    //  cout << endl;

    // }


    // int i; 
    // int j; 

    // cin >> i;
    // cin >> j;

    // int n;
    // cin >> n;


    // for(int r=0; r<n; r++){

    //     for(int c=0; c<r+1; c++ ){
    //         cout << "* ";
           
    //         }
    //    cout << endl;
   
    //     }


// pyramid

    // int n;
    // cin >> n;


    // for(int r=0; r<n; r++){

    //     for(int c=0; c<r+1; c++ ){
    //         cout << "* ";
           
    //         }
    //    cout << endl;
   
    //     }


    // int n;
    // cin >> n;


    // for(int r=0; r<n; r++){

    //     for(int c=0; c<r+1; c++ ){
    //         cout << c+1;
           
    //         }
    //    cout << endl;
   

    // }


    int n;
    cin >> n;


    for(int r=0; r<n; r++){

// spaces

        for(int c=0; c<n-r; c++ ){
            cout << "  ";
           
            }
// stars
        for(int c=0; c<r+1; c++ ){
            cout << "* ";
           
            }
       cout << endl;
   

    }



















    }





    
