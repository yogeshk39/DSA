#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;


void printa(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


int uniqe(vector<int> arr){

    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){ 
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    cout << uniqe(arr) << endl;

    return 0;
}
