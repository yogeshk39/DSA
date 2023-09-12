#include <iostream>
using namespace std;

int main(){


    int n;
    cin >> n;


    for(int row=0; row<n; row=row+1) {
		//spaces
		for(int col=0;col<row; col = col + 1) {
			cout << " ";
		}

		//stars
		for(int col=0; col<2*n - 2*row-1; col = col + 1) {
			//if first character or if last character
			if(col == 0 || col == 2*n - 2*row-2) {
				//first character or last character
				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		cout << endl;

	}

}