#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <iostream>
#include <array>
#include "Cuadrado.h"
#include "Arco.h"
#include "Triangulo.h"

#define _USE_MATH_DEFINES

using namespace std;

int main(){

    int option;

    cout << "Que figura le gustaría dibujar?\n1)Cuadrado\n2)Triangulo\n3)Arco\n\n4)Salir del sistema" << endl;
    cin >> option;

    //cout << option << endl;

    switch (option)
    {
    case 1:
        cout << "Square start" << endl;

        int n;
        cout << ("Numero de lados del poligono: ");
        cin >> n;

        int centrox = 300, centroy = 250, radio = 50;
        float x[n];
        float y[n];
        float pi = M_PI;

        cout << pi << endl;

        for (int i = 0; i < n; i++)
        {
            x[i] = radio * cos(2 * pi * i / n) + centrox;
            y[i] = radio * sin(2 * pi * i / n) + centroy;
            cout << "X: " << x[i] << " Y: " << y[i] << endl;
        }

        int arr[n * 2 + 2];
        int j = 0;
        for (int i = 0; i < n * 2; i = i + 2)
        {
            arr[i] = x[j];
            j++;
        }
        j = 0;
        for (int i = 1; i < n * 2; i = i + 2)
        {
            arr[i] = y[j];
            j++;
        }

        arr[n * 2] = x[0];
        arr[n * 2 + 1] = y[0];

        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        //initGraphics(500,500);

        drawpoly(n + 1, arr);
        drawpoly(n + 1, Reflect(x, y, n));
        drawpoly(n + 1, Translate(x, y, n));
        //line(400,100,400,300);

        int maxX = getmaxx();
        int maxY = getmaxy();

        cout << "Max X and Y are: " << maxX << " " << maxY << endl;

        getch();

        closegraph();

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
        break;
    }

    return 0;
}