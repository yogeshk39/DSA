#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

int binarysearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        int element = arr[mid];
        if(element==target){
            return mid;
        }
        else if (target < element){
            end = mid-1;

        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    
    }
    return -1;
}



int firstocc(vector<int> v, int target){

    int s=0;
    int e=v.size()-1;

    int m=s + (e-s)/2;
    int ans=-1;

    while(s <= e){

        if(v[m]==target){
            ans=m;

            e=m-1;
        }
        else if (target < v[m]){
            e=m-1;
        }
        else if(target > v[m]){
            s=m+1;
        }
        m=s + (e-s)/2;
    }


    return ans;
}


int lastocc(vector<int> v, int target){

    int s=0;
    int e=v.size()-1;

    int m=s + (e-s)/2;
    int ans=-1;

    while(s <= e){

        if(v[m]==target){
            ans=m;

            s=m+1;
        }
        else if (target < v[m]){
            e=m-1;
        }
        else if(target > v[m]){
            s=m+1;
        }
        m=s + (e-s)/2;
    }


    return ans;
}


int findMissing(int arr[], int N) 
{ 
	int left = 0, right = N - 1; 
	while (left <= right) { 

		int mid = (left + right) / 2; 

		// If the middle element is not on
		// the middle index, then the missing element is mid + 1.
		if (arr[mid] != mid + 1 && arr[mid - 1] == mid) 
		{
            return mid + 1;          
        }

		// This case means that the missing element is
		// not to the left. So search the right.	
		if (arr[mid] == mid + 1) 
			left = mid + 1; 

		// This case means that the missing element is not
		// to the right. So search the left.
		else
			right = mid - 1; 
	} 

	// Will reach here if no missing element found.  
	return -1; 
}









int main(){

//  int arr[]={2,4,6,8,10,12,16};
//  int size=7;
//  int target=10;

// int iot= binarysearch(arr,size,target);

// if(iot == -1){
//     cout << "not found" << endl;
// }
// else{
//     cout << "found at " << iot << "th index" << endl;
// }


// vector<int> v={1,5,9,13,17,19,23};

// int arr[]={2,4,6,8,15,20};

// int size=6;

// for vectors
// if(binary_search(v.begin(),v.end(),3)){
//     cout << "found" << endl;
// }
// else {
//      cout << " not found" << endl;
// }


// for array
// if(binary_search(arr,arr+size,4)){
//     cout << "found" << endl;
// }
// else {
//      cout << " not found" << endl;
// }



// vector<int> v={1,3,3,3,3,4,4,4,23};
// int target=2;

// int ans=firstocc(v,target);
// cout << "occouring at " << ans << endl;





// vector<int> v={1,3,3,3,3,4,4,4,6,6,6,23};
// int target=6;

// int ans=lastocc(v,target);
// cout << "occouring at " << ans << endl;


// vector<int> v={1,3,3,3,3,4,4,4,6,6,6,6,21};
// int target=6;

// auto ansf=lower_bound(v.begin(),v.end(),target);
// auto ansl=upper_bound(v.begin(),v.end(),target);

// cout << "occouring at " << ansf-v.begin() << endl;
// cout << "occouring at " << ansl-v.begin() << endl;
// cout << "TOTAL occouring at " << (ansl-v.begin()) - (ansf-v.begin())  << endl;


// missing element problem

	int arr[] = {1,2,3,4,5,7,8}; 
	int size =7;
	cout << "The missing element is: " << findMissing(arr, size); 
	return 0; 


// MOUNTAIN PROBLEM SEPERATELY CODED* in SnS1M



return 0;
}