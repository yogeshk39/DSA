#include<iostream>
using namespace std;
int main(){
// hollow rect
// int r,c,rc,cc;
// cin >> rc;
// cin >> cc;

// for (r=0;r<rc;r++)
// {
//     if (r==0||r==rc-1)
//     {
//         for (c=0;c<cc;c++)
//         cout << "* ";
//     }
//     else
//     {
//         cout << "* ";
//         for (c=0;c<cc-2;c++){
//             cout << "  ";
//         }
//         cout << "* ";
//     }
//     cout << endl;
// }



// hpyr
// int r,c,n;
// cin >> n;
// for (r=0;r<n;r++)
// {
//     for (c=0;c<r+1;c++)
//     cout << "* ";
//     // cout << endl;
// // }

// // // ihpyr

// int r,c,n;
//  cin >> n;
// for (r=0;r<n;r++)
//  {
//     for (c=0;c<n-r;c++)
//     cout << c+1;
//     cout << endl;


// diamond
// int r,c,n;
// cin >> n;
// for (r=0;r<n;r++)
// {
//     for (c=0;c<n-r-1;c++)
//     cout << " ";


//     for (c=0;c<r+1;c++){
//     cout << "* ";
//     }
//     cout << endl;
// }

// // int r,c,n;
// // cin >> n;
// for (r=0;r<n;r++)
// {
//     for (c=0;c<r;c++)
//     cout << " ";


//     for (c=0;c<n-r;c++){
//     cout << "* ";
//     }
//     cout << endl;
// }

// hollow diamond

// int r,c,n;
// cin >> n;
// for (r=0;r<n;r++)
// {
//     // spaces
//     for (c=0;c<n-r-1;c++)
//    { cout << " "; 
// }

//     // characters
//     for (c=0;c<2*r+1;c++){
//         if(c==0||c==2*r) {
//     cout << "* "; }
    
//     else{
//     cout << " ";
//     }
    
//     }
//     cout << endl;
// }

// for (r=0;r<n;r++)
// {
//     for (c=0;c<r;c++)
//     cout << " ";


//     for (c=0;c<2*n-2*r-1;c++){
//      if(c==0||c==2*n-2*r-2) {
//     cout << "* ";
//     }
//     else{
//         cout << " ";
//     }
//     // cout << endl;
// }
// cout << endl;
// }

// int r,c,n;
//  cin >> n;
// for (r=0;r<n;r++)
//  {
//     for (c=0;c<n-r;c++){
//     cout << "* ";
//     }
    
//     for (c=0; c<2*r+1; c++){
//             cout << "  ";
//         }
//     for (c=0; c<n-r; c++){
//         cout << "* ";
       
//     }
 
// cout << endl;
//     }

int r,c,n;
 cin >> n;
for (r=0;r<n;r++)
 {
    for (c=0;c<n-r;c++){
    cout << "* ";
    }
    
    for (c=0; c<2*r+1; c++){
            cout << "  ";
        }
    for (c=0; c<n-r; c++){
        cout << "* ";
       
    }
 
cout << endl;
    }















}


