#include<bits/stdc++.h>
using namespace std;

int answer(int x);
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The reverse number is: "<<answer(x);
}
int answer(int x){
    int ans=0;
    while(x!=0){
        int last_digit = x%10;
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }
        else{
        ans = (ans*10)+ last_digit;
        x /=10;
        }
    }
    return ans;
}