#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the number: ";
    cin>>k;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<pairsum(arr, n, k)<<endl;
}