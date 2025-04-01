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
    printf("%s",PC[3].tipo_cpu);
    return 0;
}
