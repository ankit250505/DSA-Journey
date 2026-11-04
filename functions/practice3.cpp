//prime number or not

#include <iostream>
using namespace std;


int isPrime(int n){
    int flag = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 1;
        }
    }
    return flag;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool result = isPrime(n);
    if(result){
        cout << n << " is not a Prime number!" << endl;
    }
    else{
        cout << n << " is a prime number!" << endl;
    }
    return 0;
}