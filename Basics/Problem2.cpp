#include<bits/stdc++.h>
using namespace std;

void printNum(int i, int n);
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNum(1, n);
}

void printNum(int i, int n){
    if (i>n){
        return;
    }
    printNum(i+1, n);
    cout << i << endl;
}