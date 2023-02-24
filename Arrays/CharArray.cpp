#include<bits/stdc++.h>
using namespace std;

bool palindrome(char arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i] != arr[n-1-i]){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the length of character: ";
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
    cout<<"Enter the Character: ";
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currentLen=0, maxLen=0;
    int st=0, end=0;
    while (1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currentLen>maxLen){
                maxLen = currentLen;
                end=st;
            }
            currentLen=0;
            st=i+1;
        }
        else
            currentLen++;
        if(arr[i]=='\0'){
            break;
        }
    i++;
    }
    cout<<"Maximum Length is: "<<maxLen<<endl;
    cout<<"The word is: ";
    for (int i=0; i<maxLen; i++){
        cout<<arr[i+end];
    }
    cout<<endl;

    if (palindrome(arr, n)==true){
        cout<<"It's a palindrome"<<endl;
    }
    else{
        cout<<"It's not a palindrome"<<endl;
    }
}