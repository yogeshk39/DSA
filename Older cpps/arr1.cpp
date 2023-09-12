#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    arr[0]=arr[0] + 10;
    printArray(arr, size);
}

bool find(int arr[], int size, int key){

    for(int i=0;i<size;i++){
        if (arr[i]==key)
        return true;
    }
    return false;
}















int main()
{

// int arr[50];
// int n;
// cout << "enter how many no in array" << endl;
// cin>>n;
// cout<<"enter values"<< endl;
// for(int i=0; i<n; i++)
// {
    
//     cin>>arr[i];
// }

// // doubling
// for(int i=0;i<n;i++)
// {
//     cout<<2*arr[i] << endl;
// }

// int n=5;
// int arr[]={1,3,5,7,9};
// for(int i=0;i<n;i++)
// {
//     arr[i]=1;
//     cout<<arr[i] << " ";
// }


// int arr[]={5,6};
// int size=2;
// inc(arr, size);
// printArray(arr, size);





// int arr[]={1,2,3,4,5};
// int size=5;

// int key;
// cin>>key;

// if(find(arr,size,key)){
//     cout << "Found" << endl;
// }
// else {
// cout << "Not Found" << endl;
// }


// int arr[]={0,1,0,0,1,0,1,0,1,0,0,1};
// int size=12;

// int numzero=0;
// int numone=0;

// for (int i=0;i<size;i++)
// {

//     if (arr[i]==0){
//         numzero++;
//     }

//     if(arr[i]==1){
//         numone++;
//     }
// }
// cout << "num of zeros " << numzero << endl;
// cout << "num of ones " << numone << endl;


// int arr[]={10,20,30,40,50,60,70,80};
// int size=8;

// int start=0;
// int end=size-1;

// while(true){

//     if (start > end){
//         break;
//     }
// case of odd size

// if (start==end){
//     cout<< arr[start] << " ";
// }

// else {

//     Niche wali lines ie 
// cout << arr[start] << " ";
//     cout << arr[end] << " ";
// }
// start++;
//     end--;
// }


//     cout << arr[start] << " ";
//     cout << arr[end] << " ";
//     start++;
//     end--;

// }




int arr[]={10,20,30,40,50,60,70,80};
int size=8;

int start=0;
int end=size-1;

while(start<=end){

swap(arr[start] , arr[end]);

start++;
end--;

}
for (int i=0;i<size;i++){
cout << arr[i] << " ";
}




    return 0;
}