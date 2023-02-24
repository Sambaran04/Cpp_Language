#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    /*Time Complexity is O(n3)
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;*/

    //Time Complexity is O(n2), More Optimised way
    for(int i=0; i<n; i++){
        int current = 0;
        for(int j=i; j<n; j++){
            current += arr[j];
        }
        maxSum = max(maxSum, current);
    }
    cout<<maxSum<<endl;
}