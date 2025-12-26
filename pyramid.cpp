// Pattern Name:  Pyramid star pattern
// Author      : Devashish Gorai
// Description : Prints a pyramid pattern like strucutre using star

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        // 1. Print leading spaces
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }

        // 2. Print stars
        for (int star = 0; star < 2 * i + 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
