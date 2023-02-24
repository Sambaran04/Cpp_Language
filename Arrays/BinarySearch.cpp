#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int s=0, e=n;
    while (s<e){
        int mid = (s+e)/2;
        if (arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the finding number: ";
    cin>>k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<binarySearch(arr, n, k)<<endl;
}


