// Inverted triangle of alphabets pattern
// A A A A
//   B B B
//     C C
//       D

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows for Inverted triangle pattern: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        char ch = 'A';
        // space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        // alphabet
        for(int j=0; j<n-i; j++){
            cout<<char(ch+i);
        }
        cout<<endl;
    }
}