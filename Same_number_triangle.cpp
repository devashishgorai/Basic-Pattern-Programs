// Pattern Name: Same Number Pattern
// Author      : Devashish Gorai
// Description : Prints a right-angle triangle using the same number

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;   
    }
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}

// Pattern  output:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5




