#include <bits/stdc++.h>
using namespace std;

void print(int n){
    char last = 'A' + n - 1;

    for(int i = 0; i < n; i++){
        for(char ch = last - i; ch <= last; ch++){
            cout << ch << " ";
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

//Pattern output:
// E
// D E
// C D E
// B C D E
// A B C D E
