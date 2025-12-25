// Pattern Name: Reverse Right Angle Traingle
// Description : Prints a reverse right angle traingle star pattern
// Author      : Devashish Gorai


#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n-i-1; j++) {

            cout << "* ";
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