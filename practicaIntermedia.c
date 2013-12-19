#include <stdio.h>
#include <sys/types.h>
#include <uninstd.h>

int main(void) {

    pid_t capitan1, capitan2, capitan3;

    capitan1=fork();
 
    if (mipid==-1)
	perror("Error en la llamada a fork()");
    else if (mipid==0)
        pid_t hijo1;
        hijo1=fork();
        
        if (mipid==-1)
	    perror("Error en la llamada a fork()");
	else if (mipid==0)
	    pid_t nieto1;
	    nieto1=fork();


    

}
