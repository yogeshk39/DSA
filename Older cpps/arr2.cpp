#include <iostream>
#include <limits.h>

#include<vector>

using namespace std;


// int finduni(vector<int> arr){

//     int ans=0;

//     for (int i=0; i<arr.size(); i++){
        
//         ans= ans^arr[i];

//     }
//     return ans;
// }


// int findUnique(vector<int> arr) {
// 	int ans = 0;

// 	for(int i=0; i<arr.size(); i++) {
// 		ans = ans ^ arr[i];
// 	}

// 	return ans;
// }



int main(){

// vector<int> arr;


// int ans = (sizeof(arr)/sizeof(int));
// cout << ans << endl;

// cout << arr.size() << endl;
// cout << arr.capacity() << endl;


// arr.push_back(5);
// arr.push_back(6);

// for (int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }

// mera code for unique
// int n;
// cin >> n;

// vector<int> arr(n);

// for(int i=0; i<arr.size(); i++){
// cin >> arr[i];
// }

// int u = finduni(arr);


// cout << "unique element is " << u << endl;


// sir wala code
// int n;
// 	cout << "Enter the size of array " << endl;
// 	cin >> n;


// 	vector<int> arr(n);
// 	cout << "Enter the elements " << endl;
// 	//taking input
// 	for(int i=0; i<arr.size(); i++) {
// 		cin >> arr[i];
// 	}

// 	int uniqueElement = findUnique(arr);

// 	cout << "Unique Element is  " << uniqueElement << endl;


// union

// int arr[]={1,3,5,7};
// int sizea = 4;
// int brr[]={2,4,6};
// int sizeb = 3;

// vector<int> ans;

// for(int i=0; i<sizea; i++){
//     ans.push_back(arr[i]);
// }

// for(int i=0; i<sizeb; i++){
//     ans.push_back(brr[i]);
// }

// for(int i=0; i<ans.size(); i++){
// cout << ans[i] << " ";
// }



// INTERSECTION 

// vector<int> arr={1,3,3,4,5,7,9};
// vector<int> brr={2,3,3,4,6};

// vector<int> ans;

// for(int i=0; i<arr.size();i++)
// {
//     int element=arr[i];

//     for (int j=0; j<brr.size(); j++)
//     {
//         if(element==brr[j]){
//         brr[j]=INT_MIN;
//         ans.push_back(element);
//         }
//     }
// }

    // for (auto value: ans) {
    //     cout << value << " ";

    // for (int k=0;k<ans.size();k++){
    //     cout << ans[k] << " ";
    // }
    
    // cout << endl;


    //union w duplicates ?


    // pair sum

    // creating pairs

    // vector<int> arr={10,20,40,60,70};

    // int sum=80;

    // for (int i=0; i<arr.size(); i++){

    //     int element=arr[i];

    

    // for (int j=i+1; j<arr.size(); j++)

    // if (element + arr[j] == sum) {

    //     cout << "(" << element << "," << arr[j] << ")" << endl;
    // }
    // }

    // vector<int> arr={10,20,30,40};

    // int sum=80;

    // for (int i=0; i<arr.size(); i++){

    //     int element1=arr[i];

    //     for (int j=i+1; j<arr.size(); j++){

    //     int element2=arr[j];
    
    //         for (int k=j+1; k<arr.size(); k++){

    //         int element3=arr[k];

    //         if (element1 + element2 + element3 == sum) 

    //         cout <<  element1 << "," << element2 << "," << element3 << endl;

    //         }
    //     }
    // }






// swap and sorting 0s and 1s


    vector<int> arr={0,1,0,1,1,0,1,0,1,1};
    int start=0;
    int end=arr.size() -1;
    int i=0;

    while(i != end){

        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }
    for(auto value: arr){
        cout << value << " ";
    }


    return 0;
}
