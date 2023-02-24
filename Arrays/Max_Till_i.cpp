#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=-999999;
    for(int i=0; i<n; i++){
        if (arr[i]>=max){
            max=arr[i];
            cout<<max<<" ";
        }
        else{
            cout<<max<<" ";
        }
    }
}