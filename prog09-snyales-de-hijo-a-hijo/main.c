#include <sudio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void tratarSenyal(int cod_senyal);

int main(int argc, char const *argv[])
{
    pid_t pidHijo1, pidHijo2;

    if (pidHijo1 = fork() ==-1){
        perror("Error creando un hijo\n");
        exit(-1);
    }
    if (pidHijo1 ==0){//hijo 1
        siganl(SIGUSR1, tratarSenyal);
        printf("[Hijo 1]: pid: %d\n", getpid());
        pause(); //Espero una señal
    }else{ //padre
        printf("[Padre]: he creado un hijo con pid: %d\n", pidHijo1);
        if (pidHijo2 = fork() == -1){
            perror("Error creando un hijo\n");
        exit(-1);
        }
        if(pidHijo2 ==0){//hijo 2
            printf("[Hijo 2]: pid: %d\n", getpid());
            printf("[Hijo 2]:tengo un hermano con  pid: %d\n", pidHijo1);
            sleep(2);
            kill(pidHijo1, SIGUSR1);

        }else{//padre
            printf("[Padre]: he creado un hijo con pid: %d\n", pidHijo2);
            printf("Esperando a un hijo...\n");
            printf("El hijo con el pid %d finalizo\n" wait(NULL));
            printf("Esperando a otro hijo...\n");
            printf("El hijo con el pid %d finalizo\n" wait(NULL));
            
        }
        
    }
    return 0;
}
void tratarSenyal(int cod_senyal){
    printf("[Proceso %d]: He recibido una señal\n", getpid)
}