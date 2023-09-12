#include <iostream>
#include <limits.h>
using namespace std;


void printa(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){ 

    int arr[8] = {10,20,30,40,50,60,70,80};
	int size = 8;

    int s=0;
    int e=size-1;

    while (true){

        if(s>e)
        break;

        if (s==e){
            cout << arr[s] << " ";

        }

        else{
            cout << arr[s] << " ";
            cout << arr[e] << " ";
        }

        s++;
        e--;
    }

return 0;

}
