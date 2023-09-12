#include <iostream>
#include <limits.h>
#include <vector>
 
using namespace std;



int main(){ 

    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    // vector<int> brr{3,4,10};

    int s=0;
    int e=arr.size() - 1;
    int i=0;

    while(i != e){

    if (arr[i] == 0){
        swap(arr[s],arr[i]);
        
        i++;
        s++;
    }
    else {
         swap(arr[e],arr[i]);
        e--;
        }
    }


    // print 
    for (auto value: arr){
        cout << value << " ";
    }





    return 0;
}
