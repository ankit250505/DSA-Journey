//calculate the sum of digits in a number using function

#include <iostream>
using namespace std;

int sumDigits(int n){

    int digit = 0;
    int sum = 0;
    int len = to_string(n).length();
    for(int i=1;i<=len;i++){
        digit = n%10;
        sum+=digit;
        n = n/10;
    }

    return sum;

}

int main() {
    
    int n ;
    cout << "Enter a number: ";
    cin >> n;

    int s = sumDigits(n);
    cout << "Sum of digits are : " << s << endl;

    return 0;
}