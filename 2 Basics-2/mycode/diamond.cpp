#include <iostream>
using namespace std;

int main(){


// pyramid
    int n;
    cin >> n;


    for(int r=0; r<n; r++){
        // spaces
        for(int c=0; c<n-r-1; c++ ) {
            cout << " ";
        }
        // stars
        for(int c=0; c< r+1; c++ ) {
            cout << "* ";
            }   
            cout << endl;
        }


   for(int r=0; r<n; r++){
        // spaces
        for(int c=0; c<r; c++ ) {
            cout << " ";
        }
        // stars
        for(int c=0; c< n-r; c++ ) {
            cout << "* ";
            }   
            cout << endl;
        }
 }