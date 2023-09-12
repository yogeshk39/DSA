#include <iostream> 
using namespace std;

int main()
{ 

// int r,c,n;
// for (r=0; r<4; r+=1)
// {
//     for (c=0; c<4; c+=1)
//         cout << "* ";
//     cout << endl;
// }


// generic
// cin >> n;
// for (r=0; r<n; r+=1)
// {
//     for (c=0; c<n; c+=1)
//         cout << "* ";
//     cout << endl;
// }

//hollow sq

int r,c,n;
for (r=0; r<4; r+=1)
{
    if (r==0||r==3){
    for (c=0; c<4; c+=1)
        cout << "* ";
    }
    else{
        cout << "* ";
        for (c=0; c<2; c+=1)
        {
            cout << "  ";
        }
        cout << "* ";
    }
    cout << endl;
}




}