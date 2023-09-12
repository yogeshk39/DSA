// inumhalf
#include<iostream>
using namespace std;

int main(){

int r,c,n;
cin >> n;
for (r=0; r<n; r++){
    for (c=0; c<n-r; c++){
        cout << c+1;
    }
    cout << endl;
}


}