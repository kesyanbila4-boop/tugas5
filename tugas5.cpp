
#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "================================" << endl;
    cout << " PROGRAM BILANGAN GENAP GANJIL " << endl;
    cout << "================================" << endl;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Bilangan " << bilangan << " adalah GENAP" << endl;
    }
    else {
        cout << "Bilangan " << bilangan << " adalah GANJIL" << endl;
    }

    return 0;
}
