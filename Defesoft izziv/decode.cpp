#include <iostream>
#include <vector>
#include <cmath>

// Funkcija za odkrivanje napake
int detectError(const std::vector<int>& data) {
    int n = data.size();
    int res = 0;
    for (int i = 0; i < log2(n); i++) {
        int parity = 0;
        int pos = (1 << i);
        for (int j = 0; j < n; j++) {
            if (j & pos) {
                parity ^= data[j];
            }
        }
        if (parity != 0) {
            res |= pos;
        }
    }
    return res;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> data(N);

    for (int i = 0; i < N; i++) {
        char byte;
        std::cin >> byte;
        data[i] = byte == '1' ? 1 : 0;
    }

    int errorPos = detectError(data);

    if (errorPos) {
        data[errorPos - 1] ^= 1; // Popravi napaèni bit
    }

    for (int i = 0, j = 0; i < N; i++) {
        while (j && (j & (j - 1)) == 0) { // preveri, ali je j moè dve
            j++; // preskoèi nadzorni bit
        }
        std::cout << data[j];
        j++;
    }
    std::cout << std::endl;

    return 0;
}
