#include<iostream>
using namespace std;
int main(){

int r,c,n;
cin >> n;
for (r=0;r<n;r++)
{
    // spaces
    for (c=0;c<n-r-1;c++)
   { cout << " "; 
}

    // characters
    for (c=0;c<2*r+1;c++){
        if(c==0||c==2*r) {
    cout << "* "; }
    
    else{
    cout << " ";
    }
    
    }
    cout << endl;
}

for (r=0;r<n;r++)
{
    for (c=0;c<r;c++)
    cout << " ";


    for (c=0;c<2*n-2*r-1;c++){
     if(c==0||c==2*n-2*r-2) {
    cout << "* ";
    }
    else{
        cout << " ";
    }
    // cout << endl;
}
cout << endl;
}


}