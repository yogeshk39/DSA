#include <iostream>
using namespace std;

// int main(){

// start 16th july -- 5min in Basics-2 Lec 11

// pyramid
    // int n;
    // cin >> n;


    // for(int r=0; r<n; r++){
    //     // spaces
    //     for(int c=0; c<n-r-1; c++ ) {
    //         cout << " ";
    //     }
    //     // stars
    //     for(int c=0; c< r+1; c++ ) {
    //         cout << "* ";
    //         }   
    //         cout << endl;
    //     }


// inv pyramid

    // int n;
    // cin >> n;


    // for(int r=0; r<n; r++){
    //     // spaces
    //     for(int c=0; c<r; c++ ) {
    //         cout << " ";
    //     }
    //     // stars
    //     for(int c=0; c< n-r; c++ ) {
    //         cout << "* ";
    //         }   
    //         cout << endl;
    //     }

    // int n;
    // cin >> n;


	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<n-row-1; col = col + 1) {
	// 		cout << " ";
	// 	}

	// 	//stars
	// 	for(int col=0; col<2*row+1; col = col + 1) {
	// 		//if first character or if last character
	// 		if(col == 0 || col == 2*row) {
	// 			//first character or last character
	// 			cout << "*";
	// 		}
	// 		else{
	// 			cout << " ";
	// 		}
	// 	}

	// 	cout << endl;
	// }

    // for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<n-row-1; col = col + 1) {
	// 		cout << " ";
	// 	}
    //     // stars
    //     for (int col=0;col<2*row+1; col = col + 1){
    //         if (col == 0 || col == 2*row){
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    

    // int n;
    // cin >> n;

// hollow pyramid

	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<n-row-1; col = col + 1) {
	// 		cout << " ";
	// 	}

	// 	//stars
	// 	for(int col=0; col<2*row+1; col = col + 1) {
	// 		//if first character or if last character
	// 		if(col == 0 || col == 2*row) {
	// 			//first character or last character
	// 			cout << "*";
	// 		}
	// 		else{
	// 			cout << " ";
	// 		}
	// 	}

	// 	cout << endl;

	// }


// inv hollow pyramid

	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<row; col = col + 1) {
	// 		cout << " ";
	// 	}

	// 	//stars
	// 	for(int col=0; col<2*n - 2*row-1; col = col + 1) {
	// 		//if first character or if last character
	// 		if(col == 0 || col == 2*n - 2*row-2) {
	// 			//first character or last character
	// 			cout << "*";
	// 		}
	// 		else{
	// 			cout << " ";
	// 		}
	// 	}

	// 	cout << endl;

	// }


    // int n;
    // cin >> n;

	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<row+1; col = col + 1) {
	// 			cout << row+1;
    //     if(col!=row){
    //         cout << "*";
    //     }
	// 	}

	// 	cout << endl;

	// }


	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0;col<n-row; col = col + 1) {
	// 			cout << n-row;
    //     if(col!=n-row-1){
    //         cout << "*";
    //     }
	// 	}

	// 	cout << endl;

	// }


    // int n;
    // cin >> n;

	// for(int row=0; row<n; row=row+1) {
	// //spaces
    // int col;
	// 	for(col=0;col<row+1; col = col + 1) {
    //         int ans= col + 1;
    //         char ch = ans + 'A'-1;
	// 			cout << ch;
    //     }
    // // reverse counting print
    // for(int col=row; col>=1; col = col - 1){
    //     int ans = col;
    //     char ch = ans + 'A'-1;
    //     cout << ch;

    //     }
	// 	cout << endl;
	// }

    // int val;
    // cin >> val;

    // switch(val) {
    //     case 1: cout << "hi";
    //     break;

    //     case 2: cout << "hlo";
    //     break;

    //     default: cout << "bye";
    // }


// Functions

	// void printn(){
	// 	int n;
	// 	cout << "enter n "<< endl;

	// 	cin >> n;
	// 	for(int i=0; i<n; i++){
	// 		cout << "yogi" << endl; 
	// 	}

	// }

	// int max(int a, int b){
	// 	if (a>b)
	// 	return a;
	// 	else
	// 	return b;
	// }

	// int main(){
	// 	int a=1;
	// 	int b=2;
	// 	// calling
	// 	cout << max(a,b);
	// 	return 0;

	int addt(int a,int b){
		int sum = a + b;
		return sum;
	}

	int maxt(int a,int b, int c){
		if(a>b && a>c){
			return a;
		}
		else if(b>a && b>c){
			return b;
		}
		else{
			return c;
		}
	}
	int main(){
		int a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;

		cout << maxt(a,b,c) << endl;
		return 0;
	}


















