#include <stdio.h>
#include <stdlib.h>
//#include <graphics.h>
#include <math.h>
//#include <iostream>
#include <array>
#include "Cuadrado.h"
#include "Arco.h"
#include "Triangulo.h"

//using namespace std;
#define _USE_MATH_DEFINES

int main(){

    int option;

    printf("Que figura le gustaría dibujar?\n1)Cuadrado\n2)Triangulo\n3)Arco\n");
    scanf("%d", option);

    printf(option);

    return 0;
}