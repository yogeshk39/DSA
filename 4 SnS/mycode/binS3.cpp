#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

// first occ

int focc(vector<int> v, int size, int t){

    int s=0;
    int e=size-1;

    int m=s+(e-s)/2;

    while(s<=e){
        int el= v[m];

        if(el == t){
            return m;
        }

        else if(t < el){
            e=m-1;
        } 

        else{
            s=m+1;
        }
        //  m=(s+e)/2;
        m=s+(e-s)/2;
    }
    return -1;
}

 

int main(){

    vector<int> v{1,3,4,4,4,4,6,7};
    int t=4;
    int iot = focc(v, t);

    cout << "ans is " << iot << endl;
}
