#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t sem1;
sem_t sem2;

void *funcion(void * args){
	while(1){
		sem_wait(&sem2);
		printf("hola %d\n",2);
		sleep(5);
		sem_post(&sem1);
	}
}
int main(){
	sem_init (&sem1,0,1);
	sem_init (&sem2,0,0);

	pthread_t id;
	pthread_create(&id,NULL,&funcion,NULL);
	while(1){
		sem_wait(&sem1);
		printf("%d\n",1);
		sem_post(&sem2);

	}

	return 0;
}

