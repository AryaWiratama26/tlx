#include <iostream>
using namespace std;


int main() {

    for (int luas = 100000; luas <=200000; luas++) {

        if (luas % 2 == 1) {
            continue;
        }

        bool kuadrat_sempurna = false;

        for (int k = 1; k <= luas; k++) {

            // Jika luas adalah tepat k * k
            // maka luas adalah kuadrat sempurna
            if (k * k == luas) {
                kuadrat_sempurna = true;
            }
        }

        if (kuadrat_sempurna) {
            cout << luas << endl;
            break;

        }

    }

    return 0;
}