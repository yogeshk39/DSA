#include <iostream>
#include <vector>

using namespace std;

int findpeak(vector<int> v){

    int s=0;
    int e=v.size()-1;

    int m = s + (e-s)/2;

    while (s < e){
        if(v[m] < v[m+1]){
            s=m+1;
        }
        else {
            e=m;
        }
        m = s + (e-s)/2;
    }
    // at index-
    // return v;
    return v[s];
}

int main(){


vector<int> arr = {0,10,5,2};

int ans = findpeak(arr);

cout << ans;




    return 0;
}

//  ?????????????????