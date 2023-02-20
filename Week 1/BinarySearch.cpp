#include<iostream>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}


int main(){
    int arr[10],n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    int c=-1;
    cout<<"Enter the value to be searched: ";
    cin>>x;
    c=binarySearch(arr,0,n-1,x);

    if(c!=-1){
        cout<<"The element is at index "<<c<<endl;
    }
    else{
        cout<<"The element is not present in the array.";
    }
    return 0;
}