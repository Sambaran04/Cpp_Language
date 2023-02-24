#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
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
    int row_start=0, column_start=0, row_end=m-1, column_end=n-1;
    while (row_start<=row_end && column_start<=column_end){
        for (int col = column_start; col<= column_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        cout<<endl;
        for (int row = row_start; row<= row_end; row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;
        cout<<endl;
        for (int col = column_end; col>= column_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        cout<<endl;
        for (int row = row_end; row>= row_start; row--){
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
        cout<<endl;
    }
}