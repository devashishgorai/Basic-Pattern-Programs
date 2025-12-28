// Pattern Name: Adavnced number  Pattern
// Description : Prints a Advanced pattern like strucutre using numbers
// Author      : Devashish Gorai

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {

        // numbers increasing
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // spaces
        for (int space = 1; space <= 2 * (n - i); space++) {
            cout << " ";
        }

        // numbers decreasing
        for (int j = i; j >= 1; j--) {
            cout << j;
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

//Pattern Output (n=4):
// 1      1
// 12    21
// 123  321
// 12344321