#include <iostream>
#include <limits.h>
using namespace std;





bool find(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return true;
    }
        return false;
}


int main(){

    int arr[6]={1,3,4,5,6,9};
    int size= 6;
    int key;
    cin >> key;


    if(find(arr,size,key)){
        cout << "f" << endl;
    }
    else{
        cout << "nf" << endl;
    }



    return 0;
}


// bool find(int arr[], int size, int key) {

// 	//linear search

// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key) 
// 			return true;
// 	}

// 	//not present
// 	return false;
// }






// int main(){

// 	int arr[5] = {1,3,5,7,8};
// 	int size = 5;

// 	cout << "Enter the key to find " << endl;
// 	int key;
// 	cin  >> key;

// 	if(find(arr,size, key)) {
// 		cout << "Found " << endl;
// 	}
// 	else {
// 		cout << "not Found " << endl;
//     }

// return 0;

// }