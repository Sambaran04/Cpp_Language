#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 or n==1){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n, r;
    cout<< "Enter the value of n: ";
    cin >> n;
    cout<< "Enter the value of r: ";
    cin >> r;
    int ans = fact(n) / (fact(n-r) * fact(r));
    cout << ans<< endl;
}