#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // finding max --> use INT_MIN , else for min --> use INT_MAX
int arr[]={1,7,6,95,46,33,65,99,101,49};
int size=10;

int maxi= INT_MIN;

for (int i=0;i<size;i++){
    if (arr[i] > maxi){
        maxi = arr[i];
    }
}

cout << "max number is " << maxi << endl;

// int arr[]={1,7,6,95,46,33,65,99,101,49};
// int size=10;

// int mini= INT_MAX;

// for (int i=0;i<size;i++){
//     if (arr[i] < mini){
//         mini = arr[i];
//     }
// }

// cout << "min number is " << mini << endl;



    return 0;
}