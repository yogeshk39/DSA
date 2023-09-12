#include <iostream>
#include <vector>

using namepsace std;

int findsqrt(int n){
    int target=n;
    int s=0;
    int e=n;

    int m = s + (e-s)/2;
    int ans=0;
    int mm = m*m;

    while(s<=e){

        if (mm==target){
            ans=v[m];
        }
        if(mm<target){
            // left search
            s=m+1;
        }
        else {
            // right search
            e=m-1;
            return ans;
        }


     m = s + (e-s)/2;




    }

    return ans;
}

int main(){



    int n;
    cin >> n;


    cout << findsqrt(n) << endl;


    return 0;
}