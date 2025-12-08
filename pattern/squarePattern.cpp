// Square Pattern of Alphabets
// A B C D
// E F G H
// I J K L

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    char ch = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}