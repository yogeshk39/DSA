#include<iostream>
using namespace std;

int main()
{
int rc,cc,r,c;
cin>>r;
cin>>c;
// cin>> rc;
// cin>> cc;
for (r=0; r<rc; r++)
{
    if (r==0||r==rc-1){
        for (c=0; c<cc; c++)
            cout<< "* ";
    }
    else
    {
        cout<< "* ";
        for (c=0; c<cc-2; c++){
            cout << "  ";
        }
        cout << "* ";

    }
    cout<< endl;

}
}





//   int r,c;
//   for (r=0; r<3; r+=1)
//   {
//     if (r==0||r==2)
//     {
//      for (c=0; c<5; c+=1)
//     cout << "* ";
    
//   }
//   else 
//   {
//  cout << "* ";
//  for (c=0; c<3; c+=1){
//     cout << "  ";
//  }
//  cout << "* ";


//   }
//   cout << endl;
//   }


