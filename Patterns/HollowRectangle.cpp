#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the no of Rows: ";
    cin>> m;
    cout<<"Enter the no of Columns: ";
    cin>> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m ||
                j == 1 || j == n)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
