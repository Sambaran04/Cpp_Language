#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int max=arr[0];
        int count=0;
        if (arr[0]>arr[1]){
                count++;
            }
        for(int i=0; i<n; i++){
            if(arr[i]>max && arr[i]<arr[i-1]){
                max=arr[i];
                count++;
            }
        }
        if (arr[n]>max){
            count++;
        }
        cout<<count;
    }
}