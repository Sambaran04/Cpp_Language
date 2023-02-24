#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the no of Rows: ";
    cin>> m;
    cout<<"Enter the no of Columns: ";
    cin>> n;
    for (int i=0; i<m;i++){
        for (int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
