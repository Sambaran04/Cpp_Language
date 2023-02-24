#include<iostream>
#include<cmath>
using namespace std;
void fib(int a, int b);

int main(){
    int a, b, n;
    cout<<"Enter lower limit: ";
    cin>>a;
    cout<<"Enter upper limit: ";
    cin>>b;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
        fib(a, b);
return 0;
}

void fib(int a, int b){
    int n1=0, n2=1, next=0;
    for (int i=a; i<=b; i++){
        cout<<n1<<", ";
        next = n1+n2;
        n1 = n2;
        n2 = next;
        }
return;
}