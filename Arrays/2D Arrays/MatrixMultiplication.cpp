#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, p, q;
    cout<<"Enter the number of rows of First Matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of First Matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the First Matrix elements: "<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the number of rows of Second Matrix: ";
    cin>>p;
    cout<<"Enter the number of columns of Second Matrix: ";
    cin>>q;
    int brr[p][q];
    int crr[m][q];
    cout<<"Enter the Second Matrix elements: "<<endl;
    for (int i=0; i<p; i++){
        for (int j=0; j<q; j++){
            cin>>brr[i][j];
        }
    }
    if (m==q){
        for (int i=0; i<m; i++){
            for (int j=0; j<q; j++){
                crr[i][j]=0;
                for (int k=0; k<n; k++){
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    }
    cout<<"Multiplied Matrix: "<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<q; j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}