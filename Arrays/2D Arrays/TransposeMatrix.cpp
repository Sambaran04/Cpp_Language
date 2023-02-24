#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    cout<<"Enter the Matrix elements: "<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    if (n==m){
        for (int i=0; i<m; i++){
            for (int j=0; j<n;j++){
                int temp = arr[i][j];
                arr[i][j]=brr[j][i];
                brr[j][i]=temp;
            }
        }
    }
    else{
        cout<<"It's not a Square Matrix";
    }
    cout<<"Transpose Matrix: "<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    