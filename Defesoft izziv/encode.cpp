#include <iostream>
#include <vector>
#include <cmath>

// Funkcija za izraèun in nastavitev vrednosti nadzornih bitov
void setParityBits(std::vector<int>& data) {
    int n = data.size();
    for (int i = 0; i < log2(n); i++) {
        int parity = 0;
        int pos = (1 << i);
        for (int j = 0; j < n; j++) {
            if (j & pos) {
                parity ^= data[j];
            }
        }
        data[pos - 1] = parity;
    }
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> data(N + log2(N) + 1); // Rezervira prostor za nadzorne bite

    // Preberemo vhodne podatke
    for (int i = 0, j = 0; i < N; i++, j++) {
        while (j && (j & (j - 1)) == 0) { // preveri, ali je j moè dve
            j++; // pomièi se naprej, ker je to mesto nadzornega bita
        }
        char byte;
        std::cin >> byte;
        data[j] = byte == '1' ? 1 : 0;
    }

    setParityBits(data);

    for (int bit : data) {
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}
