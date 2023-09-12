#include <iostream>
using namespace std;

int main(){ 
    int n;
    cin >> n;


	for(int row=0; row<n; row=row+1) {
		//spaces
		for(int col=0;col<n-row-1; col = col + 1) {
			cout << " ";
		}

		//stars
		for(int col=0; col<2*row+1; col = col + 1) {
			//if first character or if last character
			if(col == 0 || col == 2*row) {
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