// Pattern Name: Alphabetic right angle triangle Pattern
// Description : Prints a right angle traingle pattern like strucutre using Alphabets
// Author      : Devashish Gorai

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for( int i =0; i<=n; i++){
        for( char ch = 'A'; ch<='A'+i; ch++){
            cout << ch <<" ";
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

//Pattern Output;
// A
// A B
// A B C
// A B C D
// A B C D E