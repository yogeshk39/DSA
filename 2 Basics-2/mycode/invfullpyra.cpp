    #include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

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

