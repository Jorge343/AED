#include <iostream>
#include <assert.h>
#include <string>
using namespace std::literals;

int main() {
    //int, char, string, unsigned, bool, double. GRUPO 11.
    
    //int
    assert(1 + 1 == 2); //True
    assert(2 - 2 >= 5); //False

    //char

    assert('B' + 2 != 'F'); //True
    assert('♥' + 2 == '☻'); //False

    //string

    assert("Hola"s + " Como estas?"s == "Hola Como estas?"s); //True
    assert("BUEnas"s + " tardes"s <= "BUenas tardes"s); //False

    //unsigned
    
    assert(50u * 10u != 20u); //True
    assert(10u - 10u > 1); //False

    //bool

    assert(true + true == true); //True
    assert(false + false != false); //False

    //double

    assert(2.5 + 2.5 == 5); //True
    assert(1.0 + 2.6 < 3.6); //False

    /* 6.1
       Notaciones alternativas:
       double: float
       int: short
       char: signed char
       long: signed long
    */

    //6.2
    assert(0.1 * 10 == 1);
    // Se realiza de una prueba para comprobar que 0.1 sumado diez veces (multiplicado por 10) es igual a 1, lo cual es verdadero    


}