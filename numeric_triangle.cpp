// Pattern Name: Numeric right angle triangle Pattern
// Description : Prints a right angle traingle pattern like strucutre using numbers of 1 & 0
// Author      : Devashish Gorai

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int start = 1;
    for(int i=0; i<=n; i++){
        if (i %2 == 0) start = 1;
        else start = 0;
        for ( int j=0; j<=i; j++){
            cout << start << " ";
            start =1 - start;
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
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1