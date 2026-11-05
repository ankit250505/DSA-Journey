//converting a decimal number into a binary base number

#include <iostream>
using namespace std;


int DecToBin(int num){
    int ans = 0;
    int power = 1;

    while(num>0){
        int remainder = num % 2;
        num = num / 2;
        ans+= (remainder*power);
        power = power * 10;
    }

    return ans;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int result = DecToBin(num);
    cout << result << endl;
    return 0;
}
