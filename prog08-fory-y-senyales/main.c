#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>   
#include <signal.h> 

//definimos el manejador de la señal
void manejadorHijo(int num_senyal);
void manejadorPadre(int num_senyal);

int main(int argc, char const *argv[])
{
    pid_t pid;
    pid = fork();
    if(pid == -1){//Gestionamos un posible error
        perror("Error en el fork");
        exit(1);
    }
    if(pid==0){//Soy el proceso hijo
        signal(SIGUSR1, manejadorHijo);
        printf("[Proceso: %d]: Manejador activado.\n", getpid());
        pause();
    }else{//Soy el padre
        signal(SIGUSR1, manejadorPadre);
        printf("[Proceso: %d]: Manejador activado.\n", getpid());
        pause();
    }
    return 0;
}

void manejadorHijo(int num_senyal){
    printf("Soy el manejador dela señal del Hijo");
}
void manejadorPadre(int num_senyal){
    printf("Soy el manejador dela señal del Padre");    
};