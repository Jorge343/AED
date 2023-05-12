#include <iostream>



int main() {
    double a;
    double b;
    int c;
    std::cout << "Inserte dos numeros separados por un espacio";
    std::cin >> a;
    std::cin >> b;
    c = a + b;
    
    if (c > 0)
    std :: cout << "Es positivo";
    
    else if (c == 0)
    std :: cout << "Es cero";
    
    else
        std :: cout << "Es negativo";
}