#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int bs(int arr[], int size, int t){

    int s=0;
    int e=size-1;

    int m=s+(e-s)/2

    while(s<=e){
        int el= arr[m];

        if(el == t){
            return m;
        }

        else if(t < el){
            e=m-1;
        } 

        else{
            s=m+1;
        }
        //  m=(s+e)/2;
        m=s+(e-s)/2
    }
    return -1;
}



int main(){

    int arr[]={2,4,6,8,10,12,16};
    int s=7;
    int t=12;

    int iot= bs(arr, s, t);

    if(iot == -1){
        cout << "target not found" << endl;
    }
    else {
        cout << "target found at index: " << iot << endl;
    }

}



// time complexity is log(n)