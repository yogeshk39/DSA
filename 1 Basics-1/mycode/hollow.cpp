
#include <iostream>
using namespace std;

int main(){


    int i; 
    int j; 
    cin >> i;
    cin >> j;
    for(int r=0; r<i; r++){
    if (r==0 || r==i-1)
        for(int c=0; c<j; c++ ){
            cout << "* ";
    }
        else {
            cout << "* ";
        for(int c=0; c<j-2; c++ ){
            cout << "  ";
         }
         cout << "* ";
    }


 cout << endl;

    }
}