#include<iostream>
using namespace std;

int main(){

int r,c,n;
cin >> n;
for (r=0; r<n; r++){
    for (c=0; c<r+1; c++){
        cout << "* ";
    }
    cout << endl;
}


}

