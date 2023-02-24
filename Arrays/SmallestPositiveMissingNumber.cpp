#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    const int N=1e6 +2;
    bool check[N];
    for(int i=0; i<N; i++){
        check[i]=false;
    }
    int i=0;
    while(i<n){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
        i++;
    }
    for(int j=0; j<n; j++){
        if(check[j]==false){
            cout<<j<<endl;
        }
    }
}