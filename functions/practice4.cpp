//print all the prime numbers from 1 to N

#include <iostream>
using namespace std;

void allPrimeNumbers(int N){
    for(int i=2;i<=N;i++){

        bool isPrime = true;

        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cout << "Enter a range: ";
    cin >> N;

    allPrimeNumbers(N);
    cout << endl;
    return 0;
}