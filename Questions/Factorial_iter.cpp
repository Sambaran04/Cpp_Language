#include<iostream>
using namespace std;

int fact(int n){
    if (n==0 or n==1){
        return 1;
    }
    else{
        int flag = 1;
        for (int i=1; i<=n; i++){
            flag = flag * i;
        }
    return flag;
    }
 }
 int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = fact(n);
    cout << "The factorial of " << n << " is: ";
    cout << ans << endl;
 }