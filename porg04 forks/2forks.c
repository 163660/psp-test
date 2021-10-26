#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main (int argc, char const *argv[])
{
    //duplico elproceso.
    pid_t pid_padre=getpid();
    pid_t pid_hijo;
    int estado_proc;
    pid_t  pid_proceso fork();
    if(pid_proceso !=0){
        pid_hijo = pid_proceso;
    }else{
        pid_hijo = getpid();
    }
    //duplico el proceso. tanto padre como hijo se duplican
    fork();
    //lo que hara que se devuelvan 4 mensajes de hola
    printf("[Proceso %d]: Hola %d\n", getppid());
    if(getpid()==pid_padre){
        wait(&estado_proc);
        wait(&estado_proc);
    }
    if(getpid()=pid_hijo){
        wait(&estado_proc);
    }
    
    return 0;
}