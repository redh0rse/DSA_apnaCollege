// Reverse triangle Pattern of Alphabets
// A 
// B A
// C B A
// D C B A
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number of rows for Reverse Triangle Pattern: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}