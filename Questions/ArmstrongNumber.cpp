#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int a=n;
    int armstrong = 0;
    while (n!=0){
    int lastdigit=n%10;
    armstrong += lastdigit*lastdigit*lastdigit;
    n =n/10;
    }
    if (a==armstrong){
        cout<<"It's An Armstrong Number";
    }
    else{
        cout<<"It's not An Armstrong Number";
    }
    return 0;
}