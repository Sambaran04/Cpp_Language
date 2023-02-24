#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    bool flag=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"It's not a prime number";
            flag =1;
            break;
        }
    }
    if(flag==0){
        cout<<"It's a Prime Number";
    }
    return 0;
}