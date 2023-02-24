#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int pd = arr[1] - arr[0];
        int j = 2;
        int current = 2;
        int ans = 2;
        while (j<n){
            if(pd == arr[j] - arr[j-1]){
                current++;
            }
            else if(pd != arr[j] - arr[j-1]){
                pd = arr[j] - arr[j-1];
                current = 2;
            }
            ans = max(ans, current);
            j++;
        }
        cout<<ans<<endl;
    }
}