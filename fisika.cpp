#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double g = 9.81; // percepatan gravitasi
    double t, h, v, s; // waktu, ketinggian, kecepatan, dan jarak
    int i, n; // iterasi dan jumlah iterasi

    // input waktu dan jumlah iterasi
    cout << "Masukkan waktu (s): ";
    cin >> t;
    cout << "Masukkan jumlah iterasi: ";
    cin >> n;

    // hitung interval waktu
    double dt = t / n;

    // inisialisasi ketinggian dan kecepatan awal
    h = 0.0;
    v = 0.0;

    // iterasi untuk menghitung ketinggian, kecepatan, dan jarak pada setiap waktu
    for (i = 0; i <= n; i++) {
        s = h + 0.5 * g * pow(i*dt, 2); // jarak
        v = g * i * dt; // kecepatan
        h = s; // ketinggian
        cout << "t = " << i*dt << " s, h = " << h << " m, v = " << v << " m/s, s = " << s << " m\n";
    }

    return 0;
}
