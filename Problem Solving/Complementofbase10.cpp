#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        int m=n;
        int variable=0;
        if (n ==0){
            return 1;
        }else{
            while (m!=0){
                variable = (variable <<1) |1;
                m = m>>1;
            }
            int ans = (~n) & variable;
            cout<<"Complement of "<<n<<" is: "<<ans;
        }
    }