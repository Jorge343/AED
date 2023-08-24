/*
Necesidad #3: 1 variable de array de 3 arrays de 12 enteros
*/
#include<iostream>
#include<array>
using std::array;

void datosVendedor();
void ImprimirLista();

int main() 
{
    datosVendedor();
}

void datosVendedor()
{
    array<array<int, 12>, 3> Ventas{};
    for (int imp, mes,vendedor; std::cin >> imp >> mes>> vendedor;)
        Ventas.at(vendedor - 1).at(mes - 1) += imp;
        ImprimirLista(); 
}


void ImprimirLista(array<array<int, 12>, 3> Ventas)
{
    

}