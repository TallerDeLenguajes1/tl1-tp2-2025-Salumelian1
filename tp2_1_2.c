#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double  *puntero;
    puntero = (double *)malloc(N*sizeof(double));
    for (i = 0; i < N; i++){
        puntero[i] = rand() % 101;
        printf("%.1f ", puntero[i]);
        puntero++;
    }
    free(puntero);
    return 0;
}