#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void delay(int ms) {
    this_thread::sleep_for(chrono::milliseconds(ms));
}

int main() {
    cout << "=== Everything You Are (Lyrics) ===\n\n";

    string lyrics[] = {
        "Kita hampir mati",
        "Dan kau selamatkan aku",
        "Dan ku menyelamatkanmu",
        "Dan sekarang aku tau",
        "Cerita kita tak jauh berbeda",
        "Got beat down by the world",
        "Sometime I wanna fold"
    };

    int n = sizeof(lyrics) / sizeof(lyrics[0]);

    for (int i = 0; i < n; i++) {
        cout << lyrics[i] << endl;
        delay(1200); // jeda 5 detik, bisa diganti
    }

    cout << "\n=== Selesai ===\n";
    return 0;
}