#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=0;j<i;j++){
            cout << num;
            num+=1;
        }
        cout << endl;
    }
    return 0;
}