//Crear un programa que suando 2 bucles
//cree 5 hijos definidos en una constante
//N_HIJOS
//Cada uno de los hijos debe de imprimir su pid y 
//el de su padre y espesrar un segundo con sleep
//Despues de crear los hiojs el padre
//se quedara esperando en otro bucle
//al mismo numero de hijos a que terminen,
//al final el padre impirmia un mensaje
//"soy PID, todos mis hijos han terminado"
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N_HIJOS 5

int main(int argc, char const *argv[]){
    for (int i = 0; i< N_HIJOS; i++){
        
    }

    return 0;
}