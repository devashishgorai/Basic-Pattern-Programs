// Pattern Name:Alphabet Pyramid Pattern
// Description : Prints a Alphabet Pyramid / Palindromic Alphabet Pattern
// Author      : Devashish Gorai

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){

        // space
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        // character
        char ch = 'A';
        int breakpoint = i;

        for (int j = 0; j < 2*i + 1; j++){
            cout << ch;

            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}
 
//Pattern output(n=4):
//    A
//   ABA
//  ABCBA
// ABCDCBA
