//Calculate the nCr binomial coefficient for n & r
// formula = n! / r! * (n-r)!

#include <iostream>
using namespace std;


int factorial(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int coffecient(int n,int r){
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nr = n - r;
    int nrFact = factorial(nr);

    int solution = nFact / (rFact * nrFact); 
    return solution;
}
int main() {
    
    int n ;
    cout << "Enter value of n: ";
    cin >> n;

    int r ; 
    cout << "Enter value of r: ";
    cin >> r;

    int result = coffecient(n,r);
    cout << "Binomial Coffecient of " << n << " and " << r << " is " << result << endl;
    return 0;
}