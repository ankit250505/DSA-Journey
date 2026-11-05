// converting a binary number into a decimal number


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int BinToDec(int BinNum){
    int len = to_string(BinNum).length();
    int pow = 0;
    int DecNum = 0;

    for(int i=0;i<=(len-1);i++){
        int digit = BinNum % 10;
        BinNum = BinNum / 10;
        DecNum+= digit*(std :: pow(2,pow));
        pow+=1;
    }

    return DecNum;

}


int main() {
    
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    int result = BinToDec(num);
    cout << result << endl;

    return 0;
}