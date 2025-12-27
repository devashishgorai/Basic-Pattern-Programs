// Pattern Name: Combination of  Pyramid star pattern
// Author      : Devashish Gorai
// Description : Prints a combined pyramid pattern like structure using star

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    //Top part
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

    //Bottom pat
    for (int i = 0; i < n; i++)
    {
        // 1. Print leading spaces
        for (int space = 0; space < i ; space++)
        {
            cout << " ";
        }

        // 2. Print stars
        for (int star = 0; star < 2 *n- (2*i + 1); star++)
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
 
// Pattern Output:
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
//     * 