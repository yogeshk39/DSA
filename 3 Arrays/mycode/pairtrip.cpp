#include <iostream>
#include <limits.h>
#include <vector>
 
using namespace std;



int main(){ 

    vector<int> arr{10,30,40,60,70,80};
    // vector<int> brr{3,4,10};

    int sum=80;

    for(int i=0; i<arr.size(); i++){
                int e1=arr[i];

        for(int j=i+1; j<arr.size(); j++){
                int e2=arr[j];

            for(int k=j+1; k<arr.size(); k++){
                int e3=arr[k];

        
            if (e1 +e2 +e3 == sum){
            cout << "(" << e1 << ',' << e2 <<  ',' << e3 << ")" << endl;
                }
            }
        }

    }
    return 0;
}
