#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;











int main(){ 
    int arr[]={1,3,3,5,7,9};
    int sa=6;
    int brr[]={2,4,6,8};
    int sb=4;

    vector<int> ans;

    for(int i=0; i<sa; i++){
        ans.push_back(arr[i]);
    }

     for(int i=0; i<sb; i++){
        ans.push_back(brr[i]);
    }



    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

        

    return 0;
}