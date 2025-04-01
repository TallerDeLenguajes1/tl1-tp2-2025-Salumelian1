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
        PC[i].velocidad = rand () % 4;
        PC[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        PC[i].cantidad_nucleos = rand () % 8;
        indice = rand() % 6;
        PC[i].tipo_cpu = tipos[indice];
    }
    listarPCs(PC,5);
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