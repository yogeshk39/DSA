#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;


void printa(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){ 

// bool find(int arr[], int size, int key) {

// 	//linear search

// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key) 
// 			return true;
// 	}

// 	//not present
// 	return false;
// }


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
// 	}

// bool find(int arr[], int size, int key){

//     for(int i=0; i<size; i++){
//         if(arr[i]==key)
//         return true;
//     }
//         return false;
// }

//     int arr[5]={1,3,4,5,6,9};
//     int size= 6;
//     int key;
//     cin >> key;


//     if(find(arr,size,key)){
//         cout << "f" << endl;
//     }
//     else{
//         cout << "nf" << endl;
//     }

    
    // int arr[] = {43,53,57,17,99,7,4,50,31,60,81,220,1532,202,1000};
    // int maxi=INT_MIN;
	// int size = 15;

    // // int zero=0;
    // // int ones=0;


    // for (int i=0; i<size; i++){
    //     if(arr[i] > maxi){
    //         maxi = arr[i];
    //     }
    // }
    // // for (int i=0; i<size; i++){
    // //     if(arr[i] == 1){
    // //         ones++;
    // //     }
    // // }

    // // cout << "zeros are " << zero << endl;
    // // cout << "ones are " << ones << endl;

    // cout << "max is " << maxi << endl;


    // int arr[] = {43,53,57,17,99,7,4,50,31,60,81,220,1532,202,1000};
    // int mini=INT_MAX;
	// int size = 15;

    // // int zero=0;
    // // int ones=0;


    // for (int i=0; i<size; i++){
    //     if(arr[i] < mini){
    //         mini = arr[i];
    //     }
    // }
    // for (int i=0; i<size; i++){
    //     if(arr[i] == 1){
    //         ones++;
    //     }
    // }

    // cout << "zeros are " << zero << endl;
    // cout << "ones are " << ones << endl;

    // cout << "min is " << mini << endl;


	// int arr[8] = {10,20,30,40,50,60,70,80};
	// int size = 8;

	// int start = 0;
	// int end = size-1;

	// while(start <= end) {

	// 	if(start == end ) {
	// 		cout << arr[start] <<" ";
	// 	}
	// 	else {
	// 		cout << arr[start] << " ";
	// 		cout << arr[end] << " ";
	// 	}

	// 	start++;
	// 	end--;
	// }





    // int arr[8] = {10,20,30,40,50,60,70};
	// int size = 7;

	// int start = 0;
	// int end = size-1;

	// while(start<=end) {

	// 	//step1:
	// 	swap(arr[start], arr[end]);
	// 	//step:2
	// 	start++;
	// 	//step3
	// 	end--;
		
	// }

	// //printing array
	// for(int i=0; i<size; i++) {
	// 	cout << arr[i] << " ";
	// }

    // printa(arr, size);
	





//start end start shiz


    // int arr[8] = {10,20,30,40,50,60,70,80};
	// int size = 8;

    // int s=0;
    // int e=size-1;

    // while (true){

    //     if(s>e)
    //     break;

    //     if (s==e){
    //         cout << arr[s] << " ";

    //     }

    //     else{
    //         cout << arr[s] << " ";
    //         cout << arr[e] << " ";
    //     }

    //     s++;
    //     e--;
    // }




// reversing
    // int arr[7] = {10,20,30,40,50,60,70};
	// int size = 7;

    // int s=0;
    // int e=0;

    // if (s<=e){

    //     swap(arr[s],arr[e])

    // }


    // vector<int> arr{1,2,3,4};

    // for (int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    

    vector<int> brr;


    brr.push_back(3);
    brr.push_back(23);
    brr.pop_back();


     for (int i=0; i<brr.size(); i++){
        cout << brr[i] << endl;


    }
    











    return 0;
}
