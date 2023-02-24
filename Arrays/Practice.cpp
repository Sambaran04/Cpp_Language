#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l, r, count=0;
	    cin>>l>>r;
	    int arr[r-l+1];
        int j=0;
	    for (int i=l; i<=r; i++){
            arr[j] = {i};
            j++;
	    }
        for (int i=0; i<r-l+1; i++){
            if ((arr[i]%10 == 2) or (arr[i]%10 == 3) or (arr[i]%10 == 9)){
                count++;
            }
        }
	    cout<<count<<endl;
	}
	return 0;
}
