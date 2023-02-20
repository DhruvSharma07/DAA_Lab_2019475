#include<iostream>
using namespace std;

int main(){
    int arr[10],n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    int c=-1;
    cout<<"Enter the value to be searched: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            c=i;
            break;
        }
    }
    if(c!=-1){
        cout<<"The element is at index "<<c<<endl;
    }
    else{
        cout<<"The element is not present in the array.";
    }
    return 0;
}