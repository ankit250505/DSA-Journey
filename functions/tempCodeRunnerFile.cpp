// Fibonacci series for N terms
#include <iostream>
using namespace std;


void FibonacciSeries(int n){
    int a = 0;
    int b = 1;
    cout << a << "\t" << b << "\t";
    for(int i=3;i<=n;i++){
        int c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }
}
int main() {
    int n;
    cout << "Enter n series: ";
    cin >> n;

    FibonacciSeries(n);
    return 0;
}
