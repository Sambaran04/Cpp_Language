#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Your sorted array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}