#include <iostream>
#include <limits.h>
#include <vector>
 
using namespace std;



int main(){ 

    vector<int> arr{1,2,3,3,3,4,6,8};
    vector<int> brr{3,4,10};

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){

        int e=arr[i];

        for(int j=0; j<brr.size(); j++){
            if(e==brr[j]){
                brr[j]=INT_MIN;
                ans.push_back(e);
            }
        }
    }

    for(int k=0; k<ans.size(); k++){
        cout << ans[k] << " ";
    }

    return 0;
}