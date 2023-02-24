#include<iostream>
using namespace std;

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
    bool flag = true;
    cout<<"Enter the Value: ";
    cin>>k;
    for (int i=0; i<n; i++){
        if (k==arr[i]){
            cout<<"The Position of the element is: "<<i;
            flag = false;
        }
    }
    if(flag==true){
        cout<<"The element is not in the Array";
        }
return 0;
}