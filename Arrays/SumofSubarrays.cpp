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
    for(int i=0; i<n; i++){
        int current = 0;
        for(int j=i; j<n; j++){
            current += arr[j];
            cout<<current<<" ";
        }
        cout<<endl;
    }
}