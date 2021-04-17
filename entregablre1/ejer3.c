#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
//punto 3 del miniTP alumna:Alcaraz Sofia Melina
//COM:01
int main(){
	pid_t pid;
	int n=3;
	for(int i = 0; i < n; i++){
		pid = fork();//se crea un proceso hijo
		printf("\n Soy un proceso\n");
		if(pid==0){ 
			printf("\n soy un proceso hijo:%d, y mi padre es:%d\n",getpid(),getppid());
		}else{
			if(pid > 0){
			printf("\n Soy un proceso padre:%d, y mi hijo es:%d \n",getpid(),pid);
			}else{
			printf("\n Hubo un error \n");
			}
		}

		}
		//wait(NULL);
		printf("\n Linea  ejecutada por:%d \n", getpid());
		return 0;
}
