#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of stars in a line: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "*";
    }
    return 0;
}