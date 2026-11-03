#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int num = 1;

    //spaces
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        //for printing numbers after spaces for left side of pyramid
        num = 1;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        //numbers in right side pyramid
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}