#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int target){

    int start=0;
    int end=size-1;

    // int mid = (start+end)/2;  
            
    // better way*
    int mid = start + (end-start)/2;

    while(start <= end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(target < element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}


int main(){

int arr[]={2,4,6,8,10,12,16,20};
int size=8;
int target=16;

int iot = binarysearch(arr,size,target);

if(iot == -1){
    cout << "not found" << endl;

}
else{
    cout << "found at " << iot << " index" << endl;
}

    return 0;
}