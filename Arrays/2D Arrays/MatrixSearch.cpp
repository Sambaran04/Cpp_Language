#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, key;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the Matrix elements: "<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the number you want to find: ";
    cin>>key;
    int r=0, c=n-1;
    bool found = false;
    while (r<n and c>=0){
        if(arr[r][c]==key){
            cout<<r<<" "<<c;
            return true;
            break;
        }
        else if(arr[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}