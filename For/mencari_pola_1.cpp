#include <iostream>
using namespace std;


int main() {
    
    int N = 10;

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int k = 1; k <= (N - i);k++) {
            cout << ".";
        }


        cout << endl;
    }


    return 0;
}