#include <iostream>
#include <limits.h>
using namespace std;


void printa(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){ 

    int arr[7] = {10,20,30,40,50,60,70};
	int size = 7;

    int s=0;
    int e=size-1;

    while (s<=e){

    swap(arr[s],arr[e]);

        s++;
        
        e--;
    }

    printa(arr, size);

return 0;

}