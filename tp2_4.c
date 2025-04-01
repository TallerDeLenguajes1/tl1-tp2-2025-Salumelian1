#include<stdio.h>
#include <stdlib.h>
#include<time.h>

struct 
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef compu;

void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz( compu pcs[], int cantidad); 

int main (){
    srand(time(NULL));
    compu PC[5];
    int indice;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"}; 
    for (int i = 0; i < 5; i++)
    {
        PC[i].velocidad = rand() % (3 - 1 + 1) + 1;
        PC[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        PC[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        indice = rand() % 6;
        PC[i].tipo_cpu = tipos[indice];
    }
    listarPCs(PC,5);
    mostrarMasVieja(PC,5);
    return 0;
}


void listarPCs(compu pcs[], int cantidad){
    for(int i = 0; i < cantidad; i++){
        printf("Caracteristicas de la PC %d:",i + 1);
        printf("\n Velocidad: %d",pcs[i].velocidad);
        printf("\n anio: %d",pcs[i].anio);
        printf("\n cantidad de nucleos: %d",pcs[i].cantidad_nucleos);
        printf("\n Tipo de cpu: %s",pcs[i].tipo_cpu);
        printf("\n");
    }
}

void mostrarMasVieja(compu pcs[], int cantidad){
    int aux = 100000, indice;
    for(int i = 0; i < cantidad; i++){
        if(pcs[i].anio < aux){
            aux = pcs[i].anio;
            indice = i;
        }
    }
    printf("Caracteristicas de la PC mas vieja");
            printf("\n Velocidad: %d",pcs[indice].velocidad);
            printf("\n anio: %d",pcs[indice].anio);
            printf("\n cantidad de nucleos: %d",pcs[indice].cantidad_nucleos);
            printf("\n Tipo de cpu: %s",pcs[indice].tipo_cpu);
            printf("\n");
}