#include <iostream>
using namespace std;

int main() {
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
       
        for(int j=n;j>n-i-1;j--){
            cout << j;
        }

        if(i==0){
            cout << " ";
        }else{
        for(int j=n-i+1;j<=5;j++){
            cout << j;
        }
    }
        cout << endl;
    }
    return 0;
}