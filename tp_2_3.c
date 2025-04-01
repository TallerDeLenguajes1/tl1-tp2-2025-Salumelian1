#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 5 //Defino las columnas de la matriz
#define M 7  //Defino las filas de la matriz

int main(){
    srand(time(NULL)); // Comando para generar numeros randoms cada vez que se corre el codigo
    int i,j; // declaro las variables de los bucles
    int mt[N][M],*puntero; //Declaro la matriz y el puntero
    puntero = &mt[0][0]; //Apundo el puntero al primer elemento de la matriz
    for ( i = 0; i < N; i++) 
    {
        for(j = 0; j < M; j++){
            mt[i][j] = rand() % 101; //Gnero el elemento i,j random 
            printf("%d ", *(puntero + i * M +j)); //Lo muestro por pantalla mediante el puntero
        }
        printf("\n"); // Paso a la proxima fila
    }
    getchar();
    return 0;
}
