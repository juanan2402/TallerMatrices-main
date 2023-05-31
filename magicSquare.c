//Juan Serrano
//Taller 2

#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {

    int constante;
    constante= calcularConstanteMagica(filas, columnas, cuadrado[filas][columnas]);
    int suma;

    //filas
    for(int i=0; i<filas; i++){
        suma=0;
        for(int j=0; j<filas; j++){
            suma+=cuadrado[i][j];
        }
        if(constante!=suma){
            return 0;
        }   
    }
    //columnas
    for(int i=0; i<filas; i++){
        suma=0;
        for(int j=0; j<filas; j++){
            suma+=cuadrado[j][i];
        }
        if(constante!=suma){
            return 0;
        }
        
    }
    //diagonal 1
    suma=0;
    for(int i=0; i<filas; i++){
            suma+=cuadrado[i][i];
 
    }
    if(constante!=suma){
            return 0;
        }

    //diagonal 2
    suma=0;
    for(int i=filas; i>=0; i--){
            suma+=cuadrado[i][i];
    }
    if(constante!=suma){
            return 0;
        }
    else{
        return 1;
    }   
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int constanteM=0;
        for(int j=0; j<filas; j++){
            constanteM+=cuadrado[0][j];

    }
    return constanteM;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for(int i=0; i<filas; i++){
        for(int j=0; j<filas; j++){
            printf(" %d ", cuadrado[i][j]);
        }
        
            printf("\n");
        }   
}
