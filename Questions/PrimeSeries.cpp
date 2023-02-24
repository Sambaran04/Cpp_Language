#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n);

int main(){
    int a, b;
    cout<<"Enter lower limit: ";
    cin>>a;
    cout<<"Enter upper limit: ";
    cin>>b;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for (int i=a; i<=b; i++){
    if(isPrime(i)){
        cout<<i<<", ";
    }
    }
return 0;
}

bool isPrime(int n){
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}