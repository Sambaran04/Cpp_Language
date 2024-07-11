#include<bits/stdc++.h>
using namespace std;

int fact1(int n){
    if (n<=1){
        return 1;
    }
    return n*fact1(n-1);
}

int fact2(int i, int n, int ans){
    if (i>n)return ans;
    ans *=i;
    fact2(i+1, n, ans);
}

int fact3(int n, int ans){
    if (n<1) return ans;
    fact3(n-1, ans*n);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // cout << fact1(n);
    // cout << fact2(1, 5, 1);
    cout << fact3(n, 1);
}