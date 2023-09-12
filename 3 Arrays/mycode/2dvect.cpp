#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;






int main()
{
//  vector<vector<int> >arr;

//  vector<int> a{1,2,3};
//  vector<int> b{7,6,55,3,33};
//  vector<int> c{9,4};

//  arr.push_back(a);
//  arr.push_back(b);
//  arr.push_back(c);

    int r=5;
    int c=5;
    vector<vector<int> >arr (r, vector<int>(c, -8));







    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}