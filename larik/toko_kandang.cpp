#include <iostream>
using namespace std;

int main() {

    int luas1 = 225 * 335;
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    // Increment untuk berapa banyak jumlah kandang yang luasnya lebih dari 80000
    int hasil = 0;
    int batasan = 80000;


    // Kondisi luas ke-1
    if (luas1 > batasan) {
        hasil++;
    }

    // Kondisi luas ke-2
    if (luas2 > batasan) {
        hasil++;
    }

    // Kondisi luas ke-3
    if (luas3 > batasan) {
        hasil++;
    }    

    // Kondisi luas ke-4 
    if (luas4 > batasan){
        hasil++;
    }

    // Kondisi luas ke-5
    if (luas5 > batasan) {
        hasil++;
    }


    // Hasil dari berapa banyak kandang yang luasnya lebih dari 80000 (batasan)
    cout << hasil << endl;

    return 0;
}