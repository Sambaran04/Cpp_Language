#include<iostream>
using namespace std;

int binary(int arr[], int n, int k);
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the Element: ";
        cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the Value: ";
    cin>>k;
    if (binary(arr, n, k)==-1){
        cout<<"The element is not in the array";
    }
    else{
    cout<<"The position of the element is: "<<binary(arr, n, k)<<endl;
    }
}

int binary(int arr[], int n, int k){
    int s=0;
    int e=n;
    while (s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k){
            e = mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return -1;
}