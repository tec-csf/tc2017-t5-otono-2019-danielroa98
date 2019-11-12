#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <iostream>
#include <array>
#include "Cuadrado.hpp"
//#include "Arco.h"
//#include "Triangulo.h"

#define _USE_MATH_DEFINES

using namespace std;

int main(){

    int option;

    cout << "Que figura le gustaría dibujar?\n1)Cuadrado\n2)Triangulo\n3)Arco\n\n4)Salir del sistema" << endl;
    cin >> option;

    //cout << option << endl;

    switch(option)
    {
    case 1:
        comienzoCuadrado();
        break;

    case 2:
        /* code */
        cout << "Arc start" << endl;

        break;

    case 3:
        /* code */
        cout << "Triangle start" << endl;

        break;

    case 4:
        /* code */
        cout << "Adios" << endl;
        exit();
        
        break;

    default:

        cout << "Please choose a valid option" << endl;

        break;
    }

    return 0;
}