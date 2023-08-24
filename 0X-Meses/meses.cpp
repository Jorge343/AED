#include <iostream>
#include <array>
using std::array;

array<int, 12> totalIterFor();

int main() {
    array<int, 12> resultados{ totalIterFor() };

    for (int resultado : resultados) { // Bucle for con range
        std::cout << resultado << '\n';
    }
}

array<int, 12> totalIterFor() {
    array<int, 12> total{};
    for (int imp, mes; std::cin >> imp >> mes;) {
        total.at(mes - 1) += imp;
    }
    return total;
}