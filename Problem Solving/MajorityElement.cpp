#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,3,1,1,4,1,1,5,1,1,6,2,2};
    // vector<int> nums = {3, 2, 3};
    int n = nums.size();
    map<int, int> mp;
    for (int i=0; i<n; i++){
        mp[nums[i]]++;
    }

    for(auto it:mp){
        cout << it.first << " -> " << it.second <<endl;
    }

    for(auto it:mp){
        if(it.second> (n/2)) cout<< it.first;
    }
}