#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main (int argc, char const *argv[])
{
    int a = 3;
    pid_t pid = fork();
    if(pid==0){//Proceso Hijo

        //sacar pid del proceso
        printf("[Hijo]: Mi PID es : %d\n\tVariale a: %d" , getpid(), a);

        //sacar el pid del padre
        printf("[Hijo]: El id de mi padre el el %d\n", getppid());
         sleep(1);
    }else{//proceso Padre
        int estado_hijo=-4;

        //sacar pid del proceso
        printf("[Padre]: Mi PID es : %d\n\tVariale a: %d" , getpid(), a);

        //sacar el pid del padre
        printf("[Padre]: El id de mi padre el el %d\n", getppid());
        printf("[Padre]: El hijo %d ha terminado \n", wait(&estado_hijo));
        pirntf("[Padre]: El estado de finalizacion ha sido %d\n", estado_hijo)

    }
   //Parte comun a ambos procesos 
    return 0;
}
