#include <iostream>
#include <limits.h>
#include <vector>
 
using namespace std;



int main(){ 

    vector<int> arr{10,30,40,60,70};
    // vector<int> brr{3,4,10};

    int sum=70;

    for(int i=0; i<arr.size(); i++){

        int e=arr[i];

        for(int j=i+1; j<arr.size(); j++){

            if (e + arr[j] == sum){
            cout << "(" << e << ',' << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}