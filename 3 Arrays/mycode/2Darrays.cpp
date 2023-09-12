#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[4][3];
    int r=4;
    int c=3;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }

    }

cout << "printing" << endl;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}